<#
 update.ps1
 22.07.11
 by marrob
#>
Write-Output "Im going to update the MGUI201222-KARUNA-4.3i.FW project form MGUI201222-KARUNA-7i.FW"
$srcPath = "..\MGUI201222-KARUNA-7i.FW"

<#for TouchGFX Complier#>
Copy-Item "$srcPath\gcc\Makefile" -Destination ".\gcc\Makefile"

<# Load #>
Copy-Item "$srcPath\STM32CubeIDE\STM32F746NGHX_FLASH.ld" -Destination ".\STM32CubeIDE\STM32F746NGHX_FLASH.ld"
Copy-Item "$srcPath\STM32CubeIDE\STM32F746NGHX_FLASH_RELEASE.ld" -Destination ".\STM32CubeIDE\STM32F746NGHX_FLASH_RELEASE.ld"

<# Git #>
Copy-Item "$srcPath\.gitignore" -Destination ".\.gitignore"

<# User - Source #>
Copy-Item "$srcPath\Core\Src\DisplayLight.c" -Destination ".\Core\Src\DisplayLight.c"  
Copy-Item "$srcPath\Core\Src\eeprom.c" -Destination ".\Core\Src\eeprom.c"
Copy-Item "$srcPath\Core\Src\freertos.c" -Destination ".\Core\Src\freertos.c"
Copy-Item "$srcPath\Core\Src\GuiItf.c" -Destination ".\Core\Src\GuiItf.c"
Copy-Item "$srcPath\Core\Src\Log.c" -Destination ".\Core\Src\Log.c"
<#Copy-Item "$srcPath\Core\Src\main.c" -Destination ".\Core\Src\main.c"#>
Copy-Item "$srcPath\Core\Src\Periph.c" -Destination ".\Core\Src\Periph.c"
Copy-Item "$srcPath\Core\Src\PowerLed.c" -Destination ".\Core\Src\PowerLed.c"
Copy-Item "$srcPath\Core\Src\stm32f7xx_hal_msp.c" -Destination ".\Core\Src\stm32f7xx_hal_msp.c"
Copy-Item "$srcPath\Core\Src\stm32f7xx_hal_timebase_tim.c" -Destination ".\Core\Src\stm32f7xx_hal_timebase_tim.c" ## OK
Copy-Item "$srcPath\Core\Src\stm32f7xx_it.c" -Destination ".\Core\Src\stm32f7xx_it.c"
Copy-Item "$srcPath\Core\Src\system_stm32f7xx.c" -Destination ".\Core\Src\system_stm32f7xx.c"
<#User - Source#>
Copy-Item "$srcPath\Core\Inc\DisplayLight.h" -Destination ".\Core\Inc\DisplayLight.h"
Copy-Item "$srcPath\Core\Inc\eeprom.h" -Destination ".\Core\Inc\eeprom.h"
Copy-Item "$srcPath\Core\Inc\FreeRTOSConfig.h" -Destination ".\Core\Inc\FreeRTOSConfig.h"
Copy-Item "$srcPath\Core\Inc\GuiItf.h" -Destination ".\Core\Inc\GuiItf.h"
Copy-Item "$srcPath\Core\Inc\Log.h" -Destination ".\Core\Inc\Log.h"
Copy-Item "$srcPath\Core\Inc\main.h" -Destination ".\Core\Inc\main.h"
Copy-Item "$srcPath\Core\Inc\Periph.h" -Destination ".\Core\Inc\Periph.h"
Copy-Item "$srcPath\Core\Inc\PowerLed.h" -Destination ".\Core\Inc\PowerLed.h"
Copy-Item "$srcPath\Core\Inc\stm32f7xx_hal_conf.h" -Destination ".\Core\Inc\stm32f7xx_hal_conf.h"
Copy-Item "$srcPath\Core\Inc\stm32f7xx_it.h" -Destination ".\Core\Inc\stm32f7xx_it.h"
<#Drivers#>
Copy-Item "$srcPath\Drivers\gt911\gt911_tgfx.c" -Destination ".\Drivers\gt911\gt911_tgfx.c"
Copy-Item "$srcPath\Drivers\gt911\gt911_tgfx.h" -Destination ".\Drivers\gt911\gt911_tgfx.h"
Copy-Item "$srcPath\Drivers\gt911\ts.h" -Destination ".\Drivers\gt911\ts.h"

Copy-Item "$srcPath\Drivers\MX25\mx25.c" -Destination ".\Drivers\MX25\mx25.c"
Copy-Item "$srcPath\Drivers\MX25\mx25.h" -Destination ".\Drivers\MX25\mx25.h"

pause