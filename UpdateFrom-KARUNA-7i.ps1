<#
 update.ps1
 22.07.11
 by marrob
#>
Write-Output "Im going to update the MGUI201222-KARUNA-4.3i.FW project form MGUI201222-KARUNA-7i.FW"
$srcPath = "D:\@@@!ProjectS\MFWL130221\STM32CubeIDE\MGUI201222-KARUNA-7i.FW" 
$destPath = "D:\@@@!ProjectS\MFWL130221\STM32CubeIDE\MGUI201222-KARUNA-4.3i.FW"

try {  
  #for TouchGFX Complier
  Copy-Item "$srcPath\gcc\Makefile" -Destination "$destPath\gcc\Makefile" -ErrorAction Stop 

  # Load 
  Copy-Item "$srcPath\STM32CubeIDE\STM32F746NGHX_FLASH.ld" -Destination "$destPath\STM32CubeIDE\STM32F746NGHX_FLASH.ld" -ErrorAction Stop 
  Copy-Item "$srcPath\STM32CubeIDE\STM32F746NGHX_FLASH_RELEASE.ld" -Destination "$destPath\STM32CubeIDE\STM32F746NGHX_FLASH_RELEASE.ld" -ErrorAction Stop 

  # Git 
  Copy-Item "$srcPath\.gitignore" -Destination "$destPath\.gitignore" -ErrorAction Stop 

  # User - Source
  Copy-Item "$srcPath\Core\Src\DisplayLight.c" -Destination "$destPath\Core\Src\DisplayLight.c" -ErrorAction Stop  
  Copy-Item "$srcPath\Core\Src\eeprom.c" -Destination "$destPath\Core\Src\eeprom.c" -ErrorAction Stop 
  Copy-Item "$srcPath\Core\Src\freertos.c" -Destination "$destPath\Core\Src\freertos.c" -ErrorAction Stop 
  Copy-Item "$srcPath\Core\Src\GuiItf.c" -Destination "$destPath\Core\Src\GuiItf.c" -ErrorAction Stop 
  Copy-Item "$srcPath\Core\Src\Log.c" -Destination "$destPath\Core\Src\Log.c" -ErrorAction Stop 
  Copy-Item "$srcPath\Core\Src\main.c" -Destination "$destPath\Core\Src\main.c" -ErrorAction Stop 
  Copy-Item "$srcPath\Core\Src\Periph.c" -Destination "$destPath\Core\Src\Periph.c" -ErrorAction Stop 
  Copy-Item "$srcPath\Core\Src\PowerLed.c" -Destination "$destPath\Core\Src\PowerLed.c" -ErrorAction Stop 
  Copy-Item "$srcPath\Core\Src\stm32f7xx_hal_msp.c" -Destination "$destPath\Core\Src\stm32f7xx_hal_msp.c" -ErrorAction Stop 
  Copy-Item "$srcPath\Core\Src\stm32f7xx_hal_timebase_tim.c" -Destination "$destPath\Core\Src\stm32f7xx_hal_timebase_tim.c" -ErrorAction Stop 
  Copy-Item "$srcPath\Core\Src\stm32f7xx_it.c" -Destination "$destPath\Core\Src\stm32f7xx_it.c" -ErrorAction Stop 
  Copy-Item "$srcPath\Core\Src\system_stm32f7xx.c" -Destination "$destPath\Core\Src\system_stm32f7xx.c" -ErrorAction Stop 
  #User - Source
  Copy-Item "$srcPath\Core\Inc\DisplayLight.h" -Destination "$destPath\Core\Inc\DisplayLight.h" -ErrorAction Stop 
  Copy-Item "$srcPath\Core\Inc\eeprom.h" -Destination "$destPath\Core\Inc\eeprom.h" -ErrorAction Stop 
  Copy-Item "$srcPath\Core\Inc\FreeRTOSConfig.h" -Destination "$destPath\Core\Inc\FreeRTOSConfig.h" -ErrorAction Stop 
  Copy-Item "$srcPath\Core\Inc\GuiItf.h" -Destination "$destPath\Core\Inc\GuiItf.h" -ErrorAction Stop 
  Copy-Item "$srcPath\Core\Inc\Log.h" -Destination "$destPath\Core\Inc\Log.h" -ErrorAction Stop 
  Copy-Item "$srcPath\Core\Inc\main.h" -Destination "$destPath\Core\Inc\main.h" -ErrorAction Stop 
  Copy-Item "$srcPath\Core\Inc\Periph.h" -Destination "$destPath\Core\Inc\Periph.h" -ErrorAction Stop 
  Copy-Item "$srcPath\Core\Inc\PowerLed.h" -Destination "$destPath\Core\Inc\PowerLed.h" -ErrorAction Stop 
  Copy-Item "$srcPath\Core\Inc\stm32f7xx_hal_conf.h" -Destination "$destPath\Core\Inc\stm32f7xx_hal_conf.h" -ErrorAction Stop 
  Copy-Item "$srcPath\Core\Inc\stm32f7xx_it.h" -Destination "$destPath\Core\Inc\stm32f7xx_it.h" -ErrorAction Stop 
  #Drivers 
  Copy-Item "$srcPath\Drivers\gt911\gt911_tgfx.c" -Destination "$destPath\Drivers\gt911\gt911_tgfx.c" -ErrorAction Stop 
  Copy-Item "$srcPath\Drivers\gt911\gt911_tgfx.h" -Destination "$destPath\Drivers\gt911\gt911_tgfx.h" -ErrorAction Stop 
  Copy-Item "$srcPath\Drivers\gt911\ts.h" -Destination "$destPath\Drivers\gt911\ts.h" -ErrorAction Stop 

  Copy-Item "$srcPath\Drivers\MX25\mx25.c" -Destination "$destPath\Drivers\MX25\mx25.c" -ErrorAction Stop 
  Copy-Item "$srcPath\Drivers\MX25\mx25.h" -Destination "$destPath\Drivers\MX25\mx25.h" -ErrorAction Stop 

  # *** Frontend ***  

  #target
  Copy-Item "$srcPath\TouchGFX\target\TouchGFXHAL.hpp" -Destination "$destPath\TouchGFX\target\TouchGFXHAL.hpp" -ErrorAction Stop 
  Copy-Item "$srcPath\TouchGFX\target\TouchGFXHAL.cpp" -Destination "$destPath\TouchGFX\target\TouchGFXHAL.cpp" -ErrorAction Stop 
  Copy-Item "$srcPath\TouchGFX\target\TouchGFXGPIO.cpp" -Destination "$destPath\TouchGFX\target\TouchGFXGPIO.cpp" -ErrorAction Stop 
  Copy-Item "$srcPath\TouchGFX\target\STM32TouchController.hpp" -Destination "$destPath\TouchGFX\target\STM32TouchController.hpp" -ErrorAction Stop 
  Copy-Item "$srcPath\TouchGFX\target\STM32TouchController.cpp" -Destination "$destPath\TouchGFX\target\STM32TouchController.cpp" -ErrorAction Stop 
  Copy-Item "$srcPath\TouchGFX\target\CortexMMCUInstrumentation.hpp" -Destination "$destPath\TouchGFX\target\CortexMMCUInstrumentation.hpp" -ErrorAction Stop 
  Copy-Item "$srcPath\TouchGFX\target\CortexMMCUInstrumentation.cpp" -Destination "$destPath\TouchGFX\target\CortexMMCUInstrumentation.cpp" -ErrorAction Stop 

  #clockscreen_screen
  Copy-Item "$srcPath\TouchGFX\gui\src\clockscreen_screen\ClockScreenView.cpp" -Destination "$destPath\TouchGFX\gui\src\clockscreen_screen\ClockScreenView.cpp" -ErrorAction Stop 
  Copy-Item "$srcPath\TouchGFX\gui\src\clockscreen_screen\ClockScreenPresenter.cpp" -Destination "$destPath\TouchGFX\gui\src\clockscreen_screen\ClockScreenPresenter.cpp" -ErrorAction Stop
  Copy-Item "$srcPath\TouchGFX\gui\include\gui\clockscreen_screen\ClockScreenView.hpp" -Destination "$destPath\TouchGFX\gui\include\gui\clockscreen_screen\ClockScreenView.hpp" -ErrorAction Stop 
  Copy-Item "$srcPath\TouchGFX\gui\include\gui\clockscreen_screen\ClockScreenPresenter.hpp" -Destination "$destPath\TouchGFX\gui\include\gui\clockscreen_screen\ClockScreenPresenter.hpp" -ErrorAction Stop 

  #common
  Copy-Item "$srcPath\TouchGFX\gui\src\common\FrontendApplication.cpp" -Destination "$destPath\TouchGFX\gui\src\common\FrontendApplication.cpp" -ErrorAction Stop
  Copy-Item "$srcPath\TouchGFX\gui\include\gui\common\FrontendHeap.hpp" -Destination "$destPath\TouchGFX\gui\include\gui\common\FrontendHeap.hpp" -ErrorAction Stop 
  Copy-Item "$srcPath\TouchGFX\gui\include\gui\common\FrontendApplication.hpp" -Destination "$destPath\TouchGFX\gui\include\gui\common\FrontendApplication.hpp" -ErrorAction Stop 

  #containers
  Copy-Item "$srcPath\TouchGFX\gui\src\containers\UpDownContainer.cpp" -Destination "$destPath\TouchGFX\gui\src\containers\UpDownContainer.cpp" -ErrorAction Stop 
  Copy-Item "$srcPath\TouchGFX\gui\src\containers\TextContainerHigh.cpp" -Destination "$destPath\TouchGFX\gui\src\containers\TextContainerHigh.cpp" -ErrorAction Stop 
  Copy-Item "$srcPath\TouchGFX\gui\src\containers\textContainer.cpp" -Destination "$destPath\TouchGFX\gui\src\containers\textContainer.cpp" -ErrorAction Stop 
  Copy-Item "$srcPath\TouchGFX\gui\src\containers\ServiceContainer.cpp" -Destination "$destPath\TouchGFX\gui\src\containers\ServiceContainer.cpp" -ErrorAction Stop 
  Copy-Item "$srcPath\TouchGFX\gui\src\containers\ScrollElment.cpp" -Destination "$destPath\TouchGFX\gui\src\containers\ScrollElment.cpp" -ErrorAction Stop 
  Copy-Item "$srcPath\TouchGFX\gui\src\containers\DIContainer.cpp" -Destination "$destPath\TouchGFX\gui\src\containers\DIContainer.cpp" -ErrorAction Stop 
  Copy-Item "$srcPath\TouchGFX\gui\include\gui\containers\UpDownContainer.hpp" -Destination "$destPath\TouchGFX\gui\include\gui\containers\UpDownContainer.hpp" -ErrorAction Stop 
  Copy-Item "$srcPath\TouchGFX\gui\include\gui\containers\TextContainerHigh.hpp" -Destination "$destPath\TouchGFX\gui\include\gui\containers\TextContainerHigh.hpp" -ErrorAction Stop 
  Copy-Item "$srcPath\TouchGFX\gui\include\gui\containers\textContainer.hpp" -Destination "$destPath\TouchGFX\gui\include\gui\containers\textContainer.hpp" -ErrorAction Stop 
  Copy-Item "$srcPath\TouchGFX\gui\include\gui\containers\ServiceContainer.hpp" -Destination "$destPath\TouchGFX\gui\include\gui\containers\ServiceContainer.hpp" -ErrorAction Stop 
  Copy-Item "$srcPath\TouchGFX\gui\include\gui\containers\ScrollElment.hpp" -Destination "$destPath\TouchGFX\gui\include\gui\containers\ScrollElment.hpp" -ErrorAction Stop 
  Copy-Item "$srcPath\TouchGFX\gui\include\gui\containers\DIContainer.hpp" -Destination "$destPath\TouchGFX\gui\include\gui\containers\DIContainer.hpp" -ErrorAction Stop 

  #debugscreen_screen
  Copy-Item "$srcPath\TouchGFX\gui\src\debugscreen_screen\DebugScreenView.cpp" -Destination "$destPath\TouchGFX\gui\src\debugscreen_screen\DebugScreenView.cpp" -ErrorAction Stop
  Copy-Item "$srcPath\TouchGFX\gui\src\debugscreen_screen\DebugScreenPresenter.cpp" -Destination "$destPath\TouchGFX\gui\src\debugscreen_screen\DebugScreenPresenter.cpp" -ErrorAction Stop
  Copy-Item "$srcPath\TouchGFX\gui\include\gui\debugscreen_screen\DebugScreenView.hpp" -Destination "$destPath\TouchGFX\gui\include\gui\debugscreen_screen\DebugScreenView.hpp" -ErrorAction Stop
  Copy-Item "$srcPath\TouchGFX\gui\include\gui\debugscreen_screen\DebugScreenPresenter.hpp" -Destination "$destPath\TouchGFX\gui\include\gui\debugscreen_screen\DebugScreenPresenter.hpp" -ErrorAction Stop

  #displayscreen_screen
  Copy-Item "$srcPath\TouchGFX\gui\src\displayscreen_screen\DisplayScreenView.cpp" -Destination "$destPath\TouchGFX\gui\src\displayscreen_screen\DisplayScreenView.cpp" -ErrorAction Stop
  Copy-Item "$srcPath\TouchGFX\gui\src\displayscreen_screen\DisplayScreenPresenter.cpp" -Destination "$destPath\TouchGFX\gui\src\displayscreen_screen\DisplayScreenPresenter.cpp" -ErrorAction Stop
  Copy-Item "$srcPath\TouchGFX\gui\include\gui\displayscreen_screen\DisplayScreenView.hpp" -Destination "$destPath\TouchGFX\gui\include\gui\displayscreen_screen\DisplayScreenView.hpp" -ErrorAction Stop
  Copy-Item "$srcPath\TouchGFX\gui\include\gui\displayscreen_screen\DisplayScreenPresenter.hpp" -Destination "$destPath\TouchGFX\gui\include\gui\displayscreen_screen\DisplayScreenPresenter.hpp" -ErrorAction Stop

  #logscreen_screen
  Copy-Item "$srcPath\TouchGFX\gui\src\logscreen_screen\LogScreenView.cpp" -Destination "$destPath\TouchGFX\gui\src\logscreen_screen\LogScreenView.cpp" -ErrorAction Stop
  Copy-Item "$srcPath\TouchGFX\gui\src\logscreen_screen\LogScreenPresenter.cpp" -Destination "$destPath\TouchGFX\gui\src\logscreen_screen\LogScreenPresenter.cpp" -ErrorAction Stop
  Copy-Item "$srcPath\TouchGFX\gui\include\gui\logscreen_screen\LogScreenView.hpp" -Destination "$destPath\TouchGFX\gui\include\gui\logscreen_screen\LogScreenView.hpp" -ErrorAction Stop
  Copy-Item "$srcPath\TouchGFX\gui\include\gui\logscreen_screen\LogScreenPresenter.hpp" -Destination "$destPath\TouchGFX\gui\include\gui\logscreen_screen\LogScreenPresenter.hpp" -ErrorAction Stop

  #main_screen
  Copy-Item "$srcPath\TouchGFX\gui\src\main_screen\MainView.cpp" -Destination "$destPath\TouchGFX\gui\src\main_screen\MainView.cpp" -ErrorAction Stop
  Copy-Item "$srcPath\TouchGFX\gui\src\main_screen\MainPresenter.cpp" -Destination "$destPath\TouchGFX\gui\src\main_screen\MainPresenter.cpp" -ErrorAction Stop
  Copy-Item "$srcPath\TouchGFX\gui\include\gui\main_screen\MainView.hpp" -Destination "$destPath\TouchGFX\gui\include\gui\main_screen\MainView.hpp" -ErrorAction Stop
  Copy-Item "$srcPath\TouchGFX\gui\include\gui\main_screen\MainPresenter.hpp" -Destination "$destPath\TouchGFX\gui\include\gui\main_screen\MainPresenter.hpp" -ErrorAction Stop

  #model
  Copy-Item "$srcPath\TouchGFX\gui\src\model\Model.cpp" -Destination "$destPath\TouchGFX\gui\src\model\Model.cpp" -ErrorAction Stop
  Copy-Item "$srcPath\TouchGFX\gui\include\gui\model\ModelListener.hpp" -Destination "$destPath\TouchGFX\gui\include\gui\model\ModelListener.hpp" -ErrorAction Stop
  Copy-Item "$srcPath\TouchGFX\gui\include\gui\model\Model.hpp" -Destination "$destPath\TouchGFX\gui\include\gui\model\Model.hpp" -ErrorAction Stop

  #offscreen_screen
  Copy-Item "$srcPath\TouchGFX\gui\src\offscreen_screen\OffScreenView.cpp" -Destination "$destPath\TouchGFX\gui\src\offscreen_screen\OffScreenView.cpp" -ErrorAction Stop
  Copy-Item "$srcPath\TouchGFX\gui\src\offscreen_screen\OffScreenPresenter.cpp" -Destination "$destPath\TouchGFX\gui\src\offscreen_screen\OffScreenPresenter.cpp" -ErrorAction Stop
  Copy-Item "$srcPath\TouchGFX\gui\include\gui\offscreen_screen\OffScreenView.hpp" -Destination "$destPath\TouchGFX\gui\include\gui\offscreen_screen\OffScreenView.hpp" -ErrorAction Stop
  Copy-Item "$srcPath\TouchGFX\gui\include\gui\offscreen_screen\OffScreenPresenter.hpp" -Destination "$destPath\TouchGFX\gui\include\gui\offscreen_screen\OffScreenPresenter.hpp" -ErrorAction Stop

  #passwordscreen_screen
  Copy-Item "$srcPath\TouchGFX\gui\src\passwordscreen_screen\PasswordScreenView.cpp" -Destination "$destPath\TouchGFX\gui\src\passwordscreen_screen\PasswordScreenView.cpp" -ErrorAction Stop
  Copy-Item "$srcPath\TouchGFX\gui\src\passwordscreen_screen\PasswordScreenPresenter.cpp" -Destination "$destPath\TouchGFX\gui\src\passwordscreen_screen\PasswordScreenPresenter.cpp" -ErrorAction Stop
  Copy-Item "$srcPath\TouchGFX\gui\include\gui\passwordscreen_screen\PasswordScreenView.hpp" -Destination "$destPath\TouchGFX\gui\include\gui\passwordscreen_screen\PasswordScreenView.hpp" -ErrorAction Stop
  Copy-Item "$srcPath\TouchGFX\gui\include\gui\passwordscreen_screen\PasswordScreenPresenter.hpp" -Destination "$destPath\TouchGFX\gui\include\gui\passwordscreen_screen\PasswordScreenPresenter.hpp" -ErrorAction Stop

  #saverscreen_screen
  Copy-Item "$srcPath\TouchGFX\gui\src\saverscreen_screen\SaverScreenView.cpp" -Destination "$destPath\TouchGFX\gui\src\saverscreen_screen\SaverScreenView.cpp" -ErrorAction Stop
  Copy-Item "$srcPath\TouchGFX\gui\src\saverscreen_screen\SaverScreenPresenter.cpp" -Destination "$destPath\TouchGFX\gui\src\saverscreen_screen\SaverScreenPresenter.cpp" -ErrorAction Stop
  Copy-Item "$srcPath\TouchGFX\gui\include\gui\saverscreen_screen\SaverScreenView.hpp" -Destination "$destPath\TouchGFX\gui\include\gui\saverscreen_screen\SaverScreenView.hpp" -ErrorAction Stop
  Copy-Item "$srcPath\TouchGFX\gui\include\gui\saverscreen_screen\SaverScreenPresenter.hpp" -Destination "$destPath\TouchGFX\gui\include\gui\saverscreen_screen\SaverScreenPresenter.hpp" -ErrorAction Stop

  #servicescreen_screen
  Copy-Item "$srcPath\TouchGFX\gui\src\servicescreen_screen\ServiceScreenView.cpp" -Destination "$destPath\TouchGFX\gui\src\servicescreen_screen\ServiceScreenView.cpp" -ErrorAction Stop
  Copy-Item "$srcPath\TouchGFX\gui\src\servicescreen_screen\ServiceScreenPresenter.cpp" -Destination "$destPath\TouchGFX\gui\src\servicescreen_screen\ServiceScreenPresenter.cpp" -ErrorAction Stop
  Copy-Item "$srcPath\TouchGFX\gui\include\gui\servicescreen_screen\ServiceScreenView.hpp" -Destination "$destPath\TouchGFX\gui\include\gui\servicescreen_screen\ServiceScreenView.hpp" -ErrorAction Stop
  Copy-Item "$srcPath\TouchGFX\gui\include\gui\servicescreen_screen\ServiceScreenPresenter.hpp" -Destination "$destPath\TouchGFX\gui\include\gui\servicescreen_screen\ServiceScreenPresenter.hpp" -ErrorAction Stop

  #settingsscreen_screen
  Copy-Item "$srcPath\TouchGFX\gui\src\settingsscreen_screen\SettingsScreenView.cpp" -Destination "$destPath\TouchGFX\gui\src\settingsscreen_screen\SettingsScreenView.cpp" -ErrorAction Stop
  Copy-Item "$srcPath\TouchGFX\gui\src\settingsscreen_screen\SettingsScreenPresenter.cpp" -Destination "$destPath\TouchGFX\gui\src\settingsscreen_screen\SettingsScreenPresenter.cpp" -ErrorAction Stop
  Copy-Item "$srcPath\TouchGFX\gui\include\gui\settingsscreen_screen\SettingsScreenView.hpp" -Destination "$destPath\TouchGFX\gui\include\gui\settingsscreen_screen\SettingsScreenView.hpp" -ErrorAction Stop
  Copy-Item "$srcPath\TouchGFX\gui\include\gui\settingsscreen_screen\SettingsScreenPresenter.hpp" -Destination "$destPath\TouchGFX\gui\include\gui\settingsscreen_screen\SettingsScreenPresenter.hpp" -ErrorAction Stop

  #splashscreen_screen
  Copy-Item "$srcPath\TouchGFX\gui\src\splashscreen_screen\SplashScreenView.cpp" -Destination "$destPath\TouchGFX\gui\src\splashscreen_screen\SplashScreenView.cpp" -ErrorAction Stop
  Copy-Item "$srcPath\TouchGFX\gui\src\splashscreen_screen\SplashScreenPresenter.cpp" -Destination "$destPath\TouchGFX\gui\src\splashscreen_screen\SplashScreenPresenter.cpp" -ErrorAction Stop
  Copy-Item "$srcPath\TouchGFX\gui\include\gui\splashscreen_screen\SplashScreenView.hpp" -Destination "$destPath\TouchGFX\gui\include\gui\splashscreen_screen\SplashScreenView.hpp" -ErrorAction Stop
  Copy-Item "$srcPath\TouchGFX\gui\include\gui\splashscreen_screen\SplashScreenPresenter.hpp" -Destination "$destPath\TouchGFX\gui\include\gui\splashscreen_screen\SplashScreenPresenter.hpp" -ErrorAction Stop
  
  Write-Information "Mission Completed"
}
catch {
  
  Write-Error -Message "Hopsz $_"

}

pause 



<# 
fuction Copy-Compoenent{
  [function Verb-Noun {
    [CmdletBinding()]
    param (
      
    )
    
    begin {
      
    }
    
    process {
      
    }
    
    end {
      
    }
  }]

}
#>