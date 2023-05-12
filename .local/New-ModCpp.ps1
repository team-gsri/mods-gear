[CmdletBinding(SupportsShouldProcess)]
param (
  [Parameter(Mandatory)]
  [ValidateScript({ Test-Path $_ -PathType Container }, ErrorMessage = 'Path must ba a valid directory')]
  [string]
  $Target,

  [Parameter(Mandatory)]
  [string]
  $Name,

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
  $Image
)

Begin {
  $filename = Join-Path -Path $Target -ChildPath 'mod.cpp'
}

End {

  @"
name = "${Name}";
actionName = "Website";
action = "${Url}";
author = "${Author}";
"@ | Set-Content $filename

  if ($Image -ne '') {
    $ImagePath = Split-Path $Image -Leaf
    @"
picture = "${ImagePath}";
logo = "${ImagePath}";
logoOver = "${ImagePath}";
overviewPicture = "${ImagePath}";
"@ | Add-Content $filename
  }

}