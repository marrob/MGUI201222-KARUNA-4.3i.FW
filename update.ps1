<#
 update.ps1
 22.07.11
 by marrob
#>
Write-Output "Im going to update the MGUI201222-KARUNA-4.3i.FW project form MGUI201222-KARUNA-7i.FW"
$srcPath = "..\MGUI201222-KARUNA-7i.FW"

<#for TouchGFX Complier#>
Copy-Item "$srcPath\gcc\Makefile" -Destination ".\gcc\Makefile"

<#User#>
Copy-Item "$srcPath\Core\Src\DisplayLight.c" -Destination ".\Core\Src\DisplayLight.c"
Copy-Item "$srcPath\Core\Src\eeprom.c" -Destination ".\Core\Src\eeprom.c"

<#Drivers#>


pause