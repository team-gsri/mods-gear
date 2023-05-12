[CmdletBinding(SupportsShouldProcess)]
param (
  [Parameter(Mandatory)]
  [ValidateScript({ Test-Path $_ -PathType Container }, ErrorMessage = 'Path must ba a valid directory')]
  [string]
  $Source,

  [Parameter(Mandatory)]
  [ValidateScript({ Test-Path $_ -PathType Container }, ErrorMessage = 'Path must ba a valid directory')]
  [string]
  $Target,

  [Parameter(Mandatory)]
  [string]
  $Prefix,

  [Parameter()]
  [string]
  $Includes = '*.paa;*.png;*.jpg;*.xml;*.sqf;*.rtm;*.fsm;*.sqm;*.lip;*.ext;*.ogg;*.wss;*.txt;*.rvmat',

  [Parameter()]
  [ValidateScript({ Test-Path $_ -PathType Container }, ErrorMessage = 'Path must be a valid directory')]
  [string]
  $ArmaToolsPath = $env:ARMA3TOOLS
)

Begin {
  $addonBuilderExe = Join-Path -Path $ArmaToolsPath -ChildPath 'AddonBuilder/AddonBuilder.exe'
  if (-Not (Test-Path -Path $addonBuilderExe -PathType Leaf)) {
    Throw 'AddonBuilder.exe not found'
  }

  $Source = Resolve-Path $Source.TrimEnd('/\')
  $Target = Resolve-Path $Target.TrimEnd('/\')

  $includesFilename = New-TemporaryFile
  Set-Content -Path $includesFilename -Value $Includes
}

End {
  if ($PSCmdlet.ShouldProcess($Source)) {
    & $addonBuilderExe $Source $Target "-toolsDirectory=$ArmaToolsPath" -clear "-prefix=$Prefix" "-include=$includesFilename"
  }

  Remove-Item $includesFilename -Force
}