/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/containers/ServiceContainerBase.hpp>
#include <texts/TextKeysAndLanguages.hpp>
#include <touchgfx/Color.hpp>

ServiceContainerBase::ServiceContainerBase() :
    flexButtonCallback(this, &ServiceContainerBase::flexButtonCallbackHandler),
    OffsetUpDownContainerValueChangedTriggerCallback(this, &ServiceContainerBase::OffsetUpDownContainerValueChangedTriggerCallbackHandler)
{
    setWidth(800);
    setHeight(1235);
    lblKarunaUptimeTitle.setPosition(32, 306, 295, 44);
    lblKarunaUptimeTitle.setColor(touchgfx::Color::getColorFromRGB(200, 200, 200));
    lblKarunaUptimeTitle.setLinespacing(0);
    lblKarunaUptimeTitle.setTypedText(touchgfx::TypedText(T___SINGLEUSE_QYPN));

    lblKarunaUptime.setPosition(390, 306, 184, 44);
    lblKarunaUptime.setColor(touchgfx::Color::getColorFromRGB(200, 200, 200));
    lblKarunaUptime.setLinespacing(0);
    Unicode::snprintf(lblKarunaUptimeBuffer, LBLKARUNAUPTIME_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_IA01).getText());
    lblKarunaUptime.setWildcard(lblKarunaUptimeBuffer);
    lblKarunaUptime.setTypedText(touchgfx::TypedText(T___SINGLEUSE_27WL));

    lblDASClockTempTitle_0.setPosition(32, 459, 399, 44);
    lblDASClockTempTitle_0.setColor(touchgfx::Color::getColorFromRGB(200, 200, 200));
    lblDASClockTempTitle_0.setLinespacing(0);
    lblDASClockTempTitle_0.setTypedText(touchgfx::TypedText(T___SINGLEUSE_AR9N));

    lblClocktemp_0.setPosition(476, 459, 184, 44);
    lblClocktemp_0.setColor(touchgfx::Color::getColorFromRGB(200, 200, 200));
    lblClocktemp_0.setLinespacing(0);
    Unicode::snprintf(lblClocktemp_0Buffer, LBLCLOCKTEMP_0_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_1E1R).getText());
    lblClocktemp_0.setWildcard(lblClocktemp_0Buffer);
    lblClocktemp_0.setTypedText(touchgfx::TypedText(T___SINGLEUSE_Q4R5));

    lblDASClockCurrentTitle_0.setPosition(32, 504, 399, 44);
    lblDASClockCurrentTitle_0.setColor(touchgfx::Color::getColorFromRGB(200, 200, 200));
    lblDASClockCurrentTitle_0.setLinespacing(0);
    lblDASClockCurrentTitle_0.setTypedText(touchgfx::TypedText(T___SINGLEUSE_PNNL));

    lblClockLock_0.setPosition(476, 504, 184, 44);
    lblClockLock_0.setColor(touchgfx::Color::getColorFromRGB(200, 200, 200));
    lblClockLock_0.setLinespacing(0);
    Unicode::snprintf(lblClockLock_0Buffer, LBLCLOCKLOCK_0_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_S5AG).getText());
    lblClockLock_0.setWildcard(lblClockLock_0Buffer);
    lblClockLock_0.setTypedText(touchgfx::TypedText(T___SINGLEUSE_8J5N));

    lblDASClockCurrentTitle_1.setPosition(32, 592, 399, 44);
    lblDASClockCurrentTitle_1.setColor(touchgfx::Color::getColorFromRGB(200, 200, 200));
    lblDASClockCurrentTitle_1.setLinespacing(0);
    lblDASClockCurrentTitle_1.setTypedText(touchgfx::TypedText(T___SINGLEUSE_FST6));

    lblClockLock_1.setPosition(476, 548, 184, 44);
    lblClockLock_1.setColor(touchgfx::Color::getColorFromRGB(200, 200, 200));
    lblClockLock_1.setLinespacing(0);
    Unicode::snprintf(lblClockLock_1Buffer, LBLCLOCKLOCK_1_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_LWCL).getText());
    lblClockLock_1.setWildcard(lblClockLock_1Buffer);
    lblClockLock_1.setTypedText(touchgfx::TypedText(T___SINGLEUSE_8T1B));

    lblDASClockCurrentTitle_2.setPosition(32, 548, 399, 44);
    lblDASClockCurrentTitle_2.setColor(touchgfx::Color::getColorFromRGB(200, 200, 200));
    lblDASClockCurrentTitle_2.setLinespacing(0);
    lblDASClockCurrentTitle_2.setTypedText(touchgfx::TypedText(T___SINGLEUSE_3OH6));

    lblClockLock_2.setPosition(476, 592, 184, 44);
    lblClockLock_2.setColor(touchgfx::Color::getColorFromRGB(200, 200, 200));
    lblClockLock_2.setLinespacing(0);
    Unicode::snprintf(lblClockLock_2Buffer, LBLCLOCKLOCK_2_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_VBNA).getText());
    lblClockLock_2.setWildcard(lblClockLock_2Buffer);
    lblClockLock_2.setTypedText(touchgfx::TypedText(T___SINGLEUSE_9LCW));

    lblKarunaTitle.setPosition(15, 212, 294, 44);
    lblKarunaTitle.setColor(touchgfx::Color::getColorFromRGB(200, 200, 200));
    lblKarunaTitle.setLinespacing(0);
    lblKarunaTitle.setTypedText(touchgfx::TypedText(T___SINGLEUSE_0LDD));

    lblDASClockTitle.setPosition(15, 415, 294, 44);
    lblDASClockTitle.setColor(touchgfx::Color::getColorFromRGB(200, 200, 200));
    lblDASClockTitle.setLinespacing(0);
    lblDASClockTitle.setTypedText(touchgfx::TypedText(T___SINGLEUSE_YROX));

    line4.setPosition(45, 691, 710, 15);
    line4Painter.setColor(touchgfx::Color::getColorFromRGB(32, 32, 32));
    line4.setPainter(line4Painter);
    line4.setStart(0, 0);
    line4.setEnd(920, 1);
    line4.setLineWidth(2);
    line4.setLineEndingStyle(touchgfx::Line::BUTT_CAP_ENDING);

    line1.setPosition(45, 409, 710, 15);
    line1Painter.setColor(touchgfx::Color::getColorFromRGB(64, 64, 64));
    line1.setPainter(line1Painter);
    line1.setStart(0, 0);
    line1.setEnd(920, 1);
    line1.setLineWidth(2);
    line1.setLineEndingStyle(touchgfx::Line::BUTT_CAP_ENDING);

    lblGUITitle.setPosition(15, 13, 294, 44);
    lblGUITitle.setColor(touchgfx::Color::getColorFromRGB(200, 200, 200));
    lblGUITitle.setLinespacing(0);
    lblGUITitle.setTypedText(touchgfx::TypedText(T___SINGLEUSE_C8R6));

    lblGUIFwVerTitle.setPosition(32, 57, 295, 44);
    lblGUIFwVerTitle.setColor(touchgfx::Color::getColorFromRGB(200, 200, 200));
    lblGUIFwVerTitle.setLinespacing(0);
    lblGUIFwVerTitle.setTypedText(touchgfx::TypedText(T___SINGLEUSE_1OG4));

    lblGUIFwVersion.setPosition(327, 63, 466, 30);
    lblGUIFwVersion.setColor(touchgfx::Color::getColorFromRGB(200, 200, 200));
    lblGUIFwVersion.setLinespacing(0);
    lblGUIFwVersion.setAlpha(100);
    lblGUIFwVersionBuffer[0] = 0;
    lblGUIFwVersion.setWildcard(lblGUIFwVersionBuffer);
    lblGUIFwVersion.setTypedText(touchgfx::TypedText(T___SINGLEUSE_Q6L7));

    line0.setPosition(45, 208, 710, 15);
    line0Painter.setColor(touchgfx::Color::getColorFromRGB(64, 64, 64));
    line0.setPainter(line0Painter);
    line0.setStart(0, 0);
    line0.setEnd(920, 1);
    line0.setLineWidth(2);
    line0.setLineEndingStyle(touchgfx::Line::BUTT_CAP_ENDING);

    lblKarunaFwVerTitle.setPosition(32, 260, 306, 44);
    lblKarunaFwVerTitle.setColor(touchgfx::Color::getColorFromRGB(200, 200, 200));
    lblKarunaFwVerTitle.setLinespacing(0);
    lblKarunaFwVerTitle.setTypedText(touchgfx::TypedText(T___SINGLEUSE_G1LA));

    lblKarunaFwVersion.setPosition(344, 266, 449, 29);
    lblKarunaFwVersion.setColor(touchgfx::Color::getColorFromRGB(200, 200, 200));
    lblKarunaFwVersion.setLinespacing(0);
    lblKarunaFwVersion.setAlpha(100);
    lblKarunaFwVersionBuffer[0] = 0;
    lblKarunaFwVersion.setWildcard(lblKarunaFwVersionBuffer);
    lblKarunaFwVersion.setTypedText(touchgfx::TypedText(T___SINGLEUSE_AT65));

    btnFactoryReset.setBoxWithBorderPosition(0, 0, 772, 72);
    btnFactoryReset.setBorderSize(1);
    btnFactoryReset.setBoxWithBorderColors(touchgfx::Color::getColorFromRGB(0, 0, 0), touchgfx::Color::getColorFromRGB(32, 32, 32), touchgfx::Color::getColorFromRGB(100, 100, 100), touchgfx::Color::getColorFromRGB(100, 100, 100));
    btnFactoryReset.setText(TypedText(T___SINGLEUSE_GKKS));
    btnFactoryReset.setTextPosition(-17, 20, 772, 72);
    btnFactoryReset.setTextColors(touchgfx::Color::getColorFromRGB(150, 118, 73), touchgfx::Color::getColorFromRGB(64, 64, 64));
    btnFactoryReset.setPosition(15, 1051, 772, 72);
    btnFactoryReset.setAction(flexButtonCallback);

    btnSoftReset.setBoxWithBorderPosition(0, 0, 772, 72);
    btnSoftReset.setBorderSize(1);
    btnSoftReset.setBoxWithBorderColors(touchgfx::Color::getColorFromRGB(0, 0, 0), touchgfx::Color::getColorFromRGB(32, 32, 32), touchgfx::Color::getColorFromRGB(100, 100, 100), touchgfx::Color::getColorFromRGB(100, 100, 100));
    btnSoftReset.setText(TypedText(T___SINGLEUSE_T381));
    btnSoftReset.setTextPosition(-20, 20, 772, 72);
    btnSoftReset.setTextColors(touchgfx::Color::getColorFromRGB(150, 118, 73), touchgfx::Color::getColorFromRGB(64, 64, 64));
    btnSoftReset.setPosition(15, 964, 772, 72);
    btnSoftReset.setAction(flexButtonCallback);

    line2_1.setPosition(45, 1166, 710, 15);
    line2_1Painter.setColor(touchgfx::Color::getColorFromRGB(64, 64, 64));
    line2_1.setPainter(line2_1Painter);
    line2_1.setStart(0, 0);
    line2_1.setEnd(920, 1);
    line2_1.setLineWidth(2);
    line2_1.setLineEndingStyle(touchgfx::Line::BUTT_CAP_ENDING);

    lblBootUpCountTitle.setXY(32, 105);
    lblBootUpCountTitle.setColor(touchgfx::Color::getColorFromRGB(200, 200, 200));
    lblBootUpCountTitle.setLinespacing(0);
    lblBootUpCountTitle.setTypedText(touchgfx::TypedText(T___SINGLEUSE_3GMJ));

    lblBootupCnt.setPosition(387, 105, 174, 44);
    lblBootupCnt.setColor(touchgfx::Color::getColorFromRGB(200, 200, 200));
    lblBootupCnt.setLinespacing(0);
    Unicode::snprintf(lblBootupCntBuffer, LBLBOOTUPCNT_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_Z9BW).getText());
    lblBootupCnt.setWildcard(lblBootupCntBuffer);
    lblBootupCnt.setTypedText(touchgfx::TypedText(T___SINGLEUSE_KTHD));

    lblBusUartErrorCntTitle.setXY(32, 149);
    lblBusUartErrorCntTitle.setColor(touchgfx::Color::getColorFromRGB(200, 200, 200));
    lblBusUartErrorCntTitle.setLinespacing(0);
    lblBusUartErrorCntTitle.setTypedText(touchgfx::TypedText(T___SINGLEUSE_W2OM));

    lblBusUartErrorCnt.setPosition(387, 149, 93, 44);
    lblBusUartErrorCnt.setColor(touchgfx::Color::getColorFromRGB(200, 200, 200));
    lblBusUartErrorCnt.setLinespacing(0);
    Unicode::snprintf(lblBusUartErrorCntBuffer, LBLBUSUARTERRORCNT_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_WMAQ).getText());
    lblBusUartErrorCnt.setWildcard(lblBusUartErrorCntBuffer);
    lblBusUartErrorCnt.setTypedText(touchgfx::TypedText(T___SINGLEUSE_3TGM));

    lblKarunaUptimeCntTitle.setXY(32, 350);
    lblKarunaUptimeCntTitle.setColor(touchgfx::Color::getColorFromRGB(200, 200, 200));
    lblKarunaUptimeCntTitle.setLinespacing(0);
    lblKarunaUptimeCntTitle.setTypedText(touchgfx::TypedText(T___SINGLEUSE_KPYH));

    lblKarunaUartErrorCnt.setPosition(390, 350, 93, 44);
    lblKarunaUartErrorCnt.setColor(touchgfx::Color::getColorFromRGB(200, 200, 200));
    lblKarunaUartErrorCnt.setLinespacing(0);
    Unicode::snprintf(lblKarunaUartErrorCntBuffer, LBLKARUNAUARTERRORCNT_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_6BR6).getText());
    lblKarunaUartErrorCnt.setWildcard(lblKarunaUartErrorCntBuffer);
    lblKarunaUartErrorCnt.setTypedText(touchgfx::TypedText(T___SINGLEUSE_9QB9));

    line1_1.setPosition(45, 863, 710, 15);
    line1_1Painter.setColor(touchgfx::Color::getColorFromRGB(64, 64, 64));
    line1_1.setPainter(line1_1Painter);
    line1_1.setStart(0, 0);
    line1_1.setEnd(920, 1);
    line1_1.setLineWidth(2);
    line1_1.setLineEndingStyle(touchgfx::Line::BUTT_CAP_ENDING);

    line1_1_1.setPosition(45, 1190, 710, 15);
    line1_1_1Painter.setColor(touchgfx::Color::getColorFromRGB(64, 64, 64));
    line1_1_1.setPainter(line1_1_1Painter);
    line1_1_1.setStart(0, 0);
    line1_1_1.setEnd(920, 1);
    line1_1_1.setLineWidth(2);
    line1_1_1.setLineEndingStyle(touchgfx::Line::BUTT_CAP_ENDING);

    btnDebug.setBoxWithBorderPosition(0, 0, 772, 72);
    btnDebug.setBorderSize(1);
    btnDebug.setBoxWithBorderColors(touchgfx::Color::getColorFromRGB(0, 0, 0), touchgfx::Color::getColorFromRGB(32, 32, 32), touchgfx::Color::getColorFromRGB(100, 100, 100), touchgfx::Color::getColorFromRGB(100, 100, 100));
    btnDebug.setText(TypedText(T___SINGLEUSE_PVRW));
    btnDebug.setTextPosition(-20, 20, 772, 72);
    btnDebug.setTextColors(touchgfx::Color::getColorFromRGB(150, 118, 73), touchgfx::Color::getColorFromRGB(64, 64, 64));
    btnDebug.setPosition(15, 878, 772, 72);
    btnDebug.setAction(flexButtonCallback);

    lblDASClockSupplyVoltageTitle_1.setPosition(32, 716, 399, 44);
    lblDASClockSupplyVoltageTitle_1.setColor(touchgfx::Color::getColorFromRGB(200, 200, 200));
    lblDASClockSupplyVoltageTitle_1.setLinespacing(0);
    lblDASClockSupplyVoltageTitle_1.setTypedText(touchgfx::TypedText(T___SINGLEUSE_DSCM));

    OffsetUpDownContainer.setXY(476, 713);
    OffsetUpDownContainer.setValueChangedTriggerCallback(OffsetUpDownContainerValueChangedTriggerCallback);

    lblDASClockSupplyVoltageTitle_1_1.setPosition(32, 763, 399, 44);
    lblDASClockSupplyVoltageTitle_1_1.setColor(touchgfx::Color::getColorFromRGB(200, 200, 200));
    lblDASClockSupplyVoltageTitle_1_1.setLinespacing(0);
    lblDASClockSupplyVoltageTitle_1_1.setTypedText(touchgfx::TypedText(T___SINGLEUSE_AFXB));

    lblTempOffsetRanges.setPosition(34, 807, 721, 36);
    lblTempOffsetRanges.setColor(touchgfx::Color::getColorFromRGB(200, 200, 200));
    lblTempOffsetRanges.setLinespacing(0);
    Unicode::snprintf(lblTempOffsetRangesBuffer, LBLTEMPOFFSETRANGES_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_QHRN).getText());
    lblTempOffsetRanges.setWildcard(lblTempOffsetRangesBuffer);
    lblTempOffsetRanges.setTypedText(touchgfx::TypedText(T___SINGLEUSE_BMC7));

    lblDASClockCurrentTitle_Intext.setPosition(34, 636, 399, 44);
    lblDASClockCurrentTitle_Intext.setColor(touchgfx::Color::getColorFromRGB(200, 200, 200));
    lblDASClockCurrentTitle_Intext.setLinespacing(0);
    lblDASClockCurrentTitle_Intext.setTypedText(touchgfx::TypedText(T___SINGLEUSE_DLPA));

    lblClockCurrent_Intext.setPosition(478, 636, 184, 44);
    lblClockCurrent_Intext.setColor(touchgfx::Color::getColorFromRGB(200, 200, 200));
    lblClockCurrent_Intext.setLinespacing(0);
    Unicode::snprintf(lblClockCurrent_IntextBuffer, LBLCLOCKCURRENT_INTEXT_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_KZHU).getText());
    lblClockCurrent_Intext.setWildcard(lblClockCurrent_IntextBuffer);
    lblClockCurrent_Intext.setTypedText(touchgfx::TypedText(T___SINGLEUSE_0PRL));

    add(lblKarunaUptimeTitle);
    add(lblKarunaUptime);
    add(lblDASClockTempTitle_0);
    add(lblClocktemp_0);
    add(lblDASClockCurrentTitle_0);
    add(lblClockLock_0);
    add(lblDASClockCurrentTitle_1);
    add(lblClockLock_1);
    add(lblDASClockCurrentTitle_2);
    add(lblClockLock_2);
    add(lblKarunaTitle);
    add(lblDASClockTitle);
    add(line4);
    add(line1);
    add(lblGUITitle);
    add(lblGUIFwVerTitle);
    add(lblGUIFwVersion);
    add(line0);
    add(lblKarunaFwVerTitle);
    add(lblKarunaFwVersion);
    add(btnFactoryReset);
    add(btnSoftReset);
    add(line2_1);
    add(lblBootUpCountTitle);
    add(lblBootupCnt);
    add(lblBusUartErrorCntTitle);
    add(lblBusUartErrorCnt);
    add(lblKarunaUptimeCntTitle);
    add(lblKarunaUartErrorCnt);
    add(line1_1);
    add(line1_1_1);
    add(btnDebug);
    add(lblDASClockSupplyVoltageTitle_1);
    add(OffsetUpDownContainer);
    add(lblDASClockSupplyVoltageTitle_1_1);
    add(lblTempOffsetRanges);
    add(lblDASClockCurrentTitle_Intext);
    add(lblClockCurrent_Intext);
}

void ServiceContainerBase::initialize()
{
    OffsetUpDownContainer.initialize();
}

void ServiceContainerBase::OffsetUpDownContainerValueChangedTriggerCallbackHandler(uint32_t value)
{
    //OffsetValueChanged
    //When OffsetUpDownContainer ValueChangedTrigger call virtual function
    //Call OnOffsetValueChanged
    OnOffsetValueChanged(value);
}

void ServiceContainerBase::flexButtonCallbackHandler(const touchgfx::AbstractButtonContainer& src)
{
    if (&src == &btnFactoryReset)
    {
        //FactoryReset
        //When btnFactoryReset clicked call virtual function
        //Call OnClickFactoryReset
        OnClickFactoryReset();
    }
    else if (&src == &btnSoftReset)
    {
        //SoftReset
        //When btnSoftReset clicked call virtual function
        //Call OnClickSoftReset
        OnClickSoftReset();
    }
    else if (&src == &btnDebug)
    {
        //ShowDebug
        //When btnDebug clicked change screen to DebugScreen
        //Go to DebugScreen with no screen transition
        application().gotoDebugScreenScreenNoTransition();
    }
}

