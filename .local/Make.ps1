[CmdletBinding(SupportsShouldProcess)]
param (
  [Parameter()]
  [ValidateScript({ Test-Path $_ -PathType Container }, ErrorMessage = 'Path must ba a valid directory')]
  [string]
  $Source = "$PSScriptRoot/../addons",

  [Parameter()]
  [string]
  $Target = "$PSScriptRoot/../out",

  [Parameter()]
  [ValidatePattern('[\w.-_]+')]
  [string]
  $Name = 'GSRI-gear-local',

  [Parameter()]
  [string]
  $Product = '[GSRI] Gear (local build)',

  [Parameter()]
  [version]
  $Version = '0.1.0',

  [Parameter()]
  [ValidatePattern('[-a-zA-Z0-9@:%._\+~#=]{1,256}\.[a-zA-Z0-9()]{1,6}\b([-a-zA-Z0-9()@:%_\+.~#?&//=]*)')]
  [string]
  $Url = 'https://www.gsri.team',

  [Parameter()]
  [string]
  $Author = 'www.gsri.team',

  [Parameter()]
  [ValidateScript({ Test-Path $_ -PathType Leaf }, ErrorMessage = 'Path must ba a valid file')]
  [string]
  $Image = (Convert-Path $PSScriptRoot/../gsrilogo.paa),

  [Parameter()]
  [ValidateScript({ Test-Path $_ -PathType Container }, ErrorMessage = 'Path must ba a valid directory')]
  [string]
  $ArmaToolsPath = ${env:ARMA3TOOLS}
)

New-Item -ItemType Directory -Path "${Target}/@${Name}/addons" -Force | Out-Null

$Source = Resolve-Path $Source.TrimEnd('/\')
$ModPath = Convert-Path "${Target}/@${Name}"

& $PSScriptRoot/New-ModCpp.ps1 -Target $ModPath -Name $Product -Image $Image
Copy-Item -Path $Image -Destination $ModPath

Get-ChildItem -Path $Source -Directory -Filter 'gsri_*' | ForEach-Object {
  $Addon = ((Split-Path $_ -LeafBase) -split 'gsri_')[1]
  $Parameters = @{
    Source        = $_.FullName
    Target        = Join-Path $ModPath addons
    Prefix        = "fr\gsri\$Addon"
    ArmaToolsPath = $ArmaToolsPath
  }
  $Parameters | ConvertTo-Json | Write-Verbose
  & $PSScriptRoot/New-PboAddon.ps1 @Parameters
}
