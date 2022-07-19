/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/settingsscreen_screen/SettingsScreenViewBase.hpp>
#include <touchgfx/Color.hpp>
#include <BitmapDatabase.hpp>
#include <texts/TextKeysAndLanguages.hpp>
#include <touchgfx/canvas_widget_renderer/CanvasWidgetRenderer.hpp>


SettingsScreenViewBase::SettingsScreenViewBase() :
    buttonCallback(this, &SettingsScreenViewBase::buttonCallbackHandler),
    flexButtonCallback(this, &SettingsScreenViewBase::flexButtonCallbackHandler),
    radioButtonSelectedCallback(this, &SettingsScreenViewBase::radioButtonSelectedCallbackHandler)
{

    touchgfx::CanvasWidgetRenderer::setupBuffer(canvasBuffer, CANVAS_BUFFER_SIZE);

    __background.setPosition(0, 0, 800, 480);
    __background.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));

    box1.setPosition(0, 0, 800, 480);
    box1.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));

    btnShowService.setBoxWithBorderPosition(0, 0, 394, 72);
    btnShowService.setBorderSize(1);
    btnShowService.setBoxWithBorderColors(touchgfx::Color::getColorFromRGB(0, 0, 0), touchgfx::Color::getColorFromRGB(32, 32, 32), touchgfx::Color::getColorFromRGB(100, 100, 100), touchgfx::Color::getColorFromRGB(100, 100, 100));
    btnShowService.setText(TypedText(T___SINGLEUSE_YTJC));
    btnShowService.setTextPosition(-20, 20, 394, 72);
    btnShowService.setTextColors(touchgfx::Color::getColorFromRGB(150, 118, 73), touchgfx::Color::getColorFromRGB(64, 64, 64));
    btnShowService.setBitmaps(Bitmap(BITMAP_DARK_ICONS_INFO_48_ID), Bitmap(BITMAP_DARK_ICONS_INFO_48_ID));
    btnShowService.setBitmapXY(30, 12);
    btnShowService.setPosition(402, 404, 394, 72);
    btnShowService.setAction(flexButtonCallback);

    btnBack.setBoxWithBorderPosition(0, 0, 394, 72);
    btnBack.setBorderSize(1);
    btnBack.setBoxWithBorderColors(touchgfx::Color::getColorFromRGB(0, 0, 0), touchgfx::Color::getColorFromRGB(32, 32, 32), touchgfx::Color::getColorFromRGB(100, 100, 100), touchgfx::Color::getColorFromRGB(100, 100, 100));
    btnBack.setBitmaps(Bitmap(BITMAP_GOBACK_ID), Bitmap(BITMAP_GOBACK_ID));
    btnBack.setBitmapXY(20, -5);
    btnBack.setText(TypedText(T___SINGLEUSE_XWX2));
    btnBack.setTextPosition(-20, 20, 394, 72);
    btnBack.setTextColors(touchgfx::Color::getColorFromRGB(150, 118, 73), touchgfx::Color::getColorFromRGB(64, 64, 64));
    btnBack.setPosition(4, 404, 394, 72);
    btnBack.setAction(flexButtonCallback);

    lblTitle.setPosition(0, 8, 800, 72);
    lblTitle.setColor(touchgfx::Color::getColorFromRGB(128, 128, 128));
    lblTitle.setLinespacing(0);
    lblTitle.setTypedText(touchgfx::TypedText(T___SINGLEUSE_YPEX));

    boxWithBorder1.setPosition(4, 80, 792, 320);
    boxWithBorder1.setColor(touchgfx::Color::getColorFromRGB(25, 25, 25));
    boxWithBorder1.setBorderColor(touchgfx::Color::getColorFromRGB(100, 100, 100));
    boxWithBorder1.setBorderSize(1);

    scrollableContainerSettings.setPosition(4, 80, 792, 320);
    scrollableContainerSettings.setScrollbarsColor(touchgfx::Color::getColorFromRGB(255, 255, 255));

    btnClockSettings.setBoxWithBorderPosition(0, 0, 700, 72);
    btnClockSettings.setBorderSize(1);
    btnClockSettings.setBoxWithBorderColors(touchgfx::Color::getColorFromRGB(0, 0, 0), touchgfx::Color::getColorFromRGB(32, 32, 32), touchgfx::Color::getColorFromRGB(100, 100, 100), touchgfx::Color::getColorFromRGB(100, 100, 100));
    btnClockSettings.setText(TypedText(T___SINGLEUSE_37JV));
    btnClockSettings.setTextPosition(-20, 20, 700, 72);
    btnClockSettings.setTextColors(touchgfx::Color::getColorFromRGB(150, 118, 73), touchgfx::Color::getColorFromRGB(64, 64, 64));
    btnClockSettings.setPosition(46, 233, 700, 72);
    btnClockSettings.setAction(flexButtonCallback);
    scrollableContainerSettings.add(btnClockSettings);

    rdbtnEnableAll.setXY(28, 42);
    rdbtnEnableAll.setBitmaps(touchgfx::Bitmap(BITMAP_OFF_44X44_ID), touchgfx::Bitmap(BITMAP_ON_44X44_ID), touchgfx::Bitmap(BITMAP_ON_44X44_ID), touchgfx::Bitmap(BITMAP_OFF_44X44_ID));
    rdbtnEnableAll.setSelected(true);
    rdbtnEnableAll.setDeselectionEnabled(false);
    scrollableContainerSettings.add(rdbtnEnableAll);

    lblAllOutput.setXY(85, 50);
    lblAllOutput.setColor(touchgfx::Color::getColorFromRGB(200, 200, 200));
    lblAllOutput.setLinespacing(0);
    lblAllOutput.setTypedText(touchgfx::TypedText(T___SINGLEUSE_AGOP));
    scrollableContainerSettings.add(lblAllOutput);

    lblLastState.setXY(471, 50);
    lblLastState.setColor(touchgfx::Color::getColorFromRGB(200, 200, 200));
    lblLastState.setLinespacing(0);
    lblLastState.setTypedText(touchgfx::TypedText(T___SINGLEUSE_9IH2));
    scrollableContainerSettings.add(lblLastState);

    chbxMCLKON.setXY(28, 111);
    chbxMCLKON.setBitmaps(touchgfx::Bitmap(BITMAP_ON_44X44_ID), touchgfx::Bitmap(BITMAP_OFF_44X44_ID));
    chbxMCLKON.forceState(true);
    chbxMCLKON.setAction(buttonCallback);
    scrollableContainerSettings.add(chbxMCLKON);

    rdbtnLastState.setXY(410, 42);
    rdbtnLastState.setBitmaps(touchgfx::Bitmap(BITMAP_OFF_44X44_ID), touchgfx::Bitmap(BITMAP_ON_44X44_ID), touchgfx::Bitmap(BITMAP_ON_44X44_ID), touchgfx::Bitmap(BITMAP_OFF_44X44_ID));
    rdbtnLastState.setSelected(false);
    rdbtnLastState.setDeselectionEnabled(false);
    scrollableContainerSettings.add(rdbtnLastState);

    lblMasterClkEnable.setXY(85, 119);
    lblMasterClkEnable.setColor(touchgfx::Color::getColorFromRGB(200, 200, 200));
    lblMasterClkEnable.setLinespacing(0);
    lblMasterClkEnable.setTypedText(touchgfx::TypedText(T___SINGLEUSE_4E2A));
    scrollableContainerSettings.add(lblMasterClkEnable);

    line1.setPosition(38, 99, 710, 15);
    line1Painter.setColor(touchgfx::Color::getColorFromRGB(64, 64, 64));
    line1.setPainter(line1Painter);
    line1.setStart(0, 0);
    line1.setEnd(920, 1);
    line1.setLineWidth(1);
    line1.setLineEndingStyle(touchgfx::Line::BUTT_CAP_ENDING);
    line1.setAlpha(128);
    scrollableContainerSettings.add(line1);

    lblGUITitle.setPosition(10, 2, 294, 44);
    lblGUITitle.setColor(touchgfx::Color::getColorFromRGB(200, 200, 200));
    lblGUITitle.setLinespacing(0);
    lblGUITitle.setTypedText(touchgfx::TypedText(T___SINGLEUSE_VP13));
    scrollableContainerSettings.add(lblGUITitle);

    line2.setPosition(38, 174, 710, 15);
    line2Painter.setColor(touchgfx::Color::getColorFromRGB(64, 64, 64));
    line2.setPainter(line2Painter);
    line2.setStart(0, 0);
    line2.setEnd(920, 1);
    line2.setLineWidth(2);
    line2.setLineEndingStyle(touchgfx::Line::BUTT_CAP_ENDING);
    scrollableContainerSettings.add(line2);

    lblClockTitle.setXY(10, 190);
    lblClockTitle.setColor(touchgfx::Color::getColorFromRGB(200, 200, 200));
    lblClockTitle.setLinespacing(0);
    lblClockTitle.setTypedText(touchgfx::TypedText(T___SINGLEUSE_23R7));
    scrollableContainerSettings.add(lblClockTitle);
    scrollableContainerSettings.setScrollbarsPermanentlyVisible();
    scrollableContainerSettings.setScrollbarsVisible(false);

    add(__background);
    add(box1);
    add(btnShowService);
    add(btnBack);
    add(lblTitle);
    add(boxWithBorder1);
    add(scrollableContainerSettings);
    radioButtonGroup1.add(rdbtnEnableAll);
    radioButtonGroup1.add(rdbtnLastState);
    radioButtonGroup1.setRadioButtonSelectedHandler(radioButtonSelectedCallback);
}

void SettingsScreenViewBase::setupScreen()
{

}

void SettingsScreenViewBase::buttonCallbackHandler(const touchgfx::AbstractButton& src)
{
    if (&src == &chbxMCLKON)
    {
        //ClickOnMasterClockOnI2S
        //When chbxMCLKON clicked call virtual function
        //Call ClickMasterClkOnI2S
        ClickMasterClkOnI2S();
    }
}

void SettingsScreenViewBase::flexButtonCallbackHandler(const touchgfx::AbstractButtonContainer& src)
{
    if (&src == &btnShowService)
    {
        //ShowPassword
        //When btnShowService clicked change screen to PasswordScreen
        //Go to PasswordScreen with screen transition towards East
        application().gotoPasswordScreenScreenSlideTransitionEast();
    }
    else if (&src == &btnBack)
    {
        //ShowMain
        //When btnBack clicked change screen to Main
        //Go to Main with screen transition towards West
        application().gotoMainScreenSlideTransitionWest();
    }
    else if (&src == &btnClockSettings)
    {
        //ShowClock
        //When btnClockSettings clicked change screen to ClockScreen
        //Go to ClockScreen with screen transition towards East
        application().gotoClockScreenScreenSlideTransitionEast();
    }
}

void SettingsScreenViewBase::radioButtonSelectedCallbackHandler(const touchgfx::AbstractButton& src)
{
    if (&src == &rdbtnEnableAll)
    {
        //SelectAllOutputAtStartUp
        //When rdbtnEnableAll selected call virtual function
        //Call RdbBtnSelectEnableAllOutputAtStartUp
        RdbBtnSelectEnableAllOutputAtStartUp();
    }
    else if (&src == &rdbtnLastState)
    {
        //SelectLastStateAtStartUp
        //When rdbtnLastState selected call virtual function
        //Call RdbBtnSelectLastOutputStatAtStartUp
        RdbBtnSelectLastOutputStatAtStartUp();
    }
}
