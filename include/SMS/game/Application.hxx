#pragma once

#include <Dolphin/types.h>

#include <JSystem/JDrama/JDRDisplay.hxx>
#include <JSystem/JUtility/JUTConsole.hxx>
#include <SMS/Player/Mario.hxx>
#include <SMS/game/GameSequence.hxx>
#include <SMS/game/MarDirector.hxx>
#include <SMS/screen/SMSFader.hxx>

class TApplication {

public:
    TApplication();

    void checkAdditionalMovie();
    void crTimeAry();
    void drawDVDErr();
    void finalize();
    void gameLoop();
    void initialize();
    void initialize_bootAfter();
    void initialize_nlogoAfter();
    void mountStageArchive();
    void proc();
    void setupThreadFuncLogo();

    u32 _00;                         // 0x0000
    TMarDirector *mMarDirector;      // 0x0004
    u8 mContext;                     // 0x0008
    TGameSequence mPrevScene;        // 0x000A
    TGameSequence mCurrentScene;     // 0x000E
    TGameSequence mNextScene;        // 0x0012
    u32 mCutSceneID;                 // 0x0018
    JDrama::TDisplay *mDisplay;      // 0x001C
    TMarioGamePad *mGamePad1;        // 0x0020
    TMarioGamePad *mGamePad2;        // 0x0024
    TMarioGamePad *mGamePad3;        // 0x0028
    TMarioGamePad *mGamePad4;        // 0x002C
    AreaEpisodeArray *mStringPaths;  // 0x0030
    TSMSFader *mFader;               // 0x0034
    u32 _04[0x8 / 4];                // 0x0038
    JKRHeap *mCurrentHeap;           // 0x0040
};

void SetupThreadFuncLogo(void *);
void SetupThreadFuncBoot(void *);

extern TApplication gpApplication;

extern JUTConsole *sReportConsole;
extern JUTConsole *sWarningConsole;
extern JUTResFont *gpSystemFont;
extern JUTResFont *gpRomFont;

extern void *arcBufNLogo;
extern void *arcBufMario;
extern void *arcBufCmn;
extern void *bufStageArcBin;
extern void *spGameHeapBlock;
extern void *gArbkConsole;
extern void *gArbkGuide;