#pragma once

#include <Dolphin/GX.h>
#include <Dolphin/types.h>

#include <JSystem/JDrama/JDRVideo.hxx>
#include <JUtility/JUTColor.hxx>

namespace JDrama {

    class TDisplay {
    public:
        TDisplay(u16 retraceCount, void *, void *, const GXRenderModeObj &);

        void startRendering();
        void endRendering();
        
        bool _00;
        GXRenderModeObj mRenderObj;
        u8 _40[0xC];
        u16 mRetraceCount;
        u16 _4E;
        u32 _50[0x10 / 4];
        JDrama::TVideo *mVideo;  // 0x0060
        u16 _64;



        //u32 _00;
        //u32* mBufferA; // 0x4
        //u32* mBufferB; // 0x8
        //u16 mActiveBuffer; // 0xc
        //u16 _0E; // 0xe
        //GXRenderModeObj mRenderObj; // 0x10
        //u32 _40; // 0x40
        //u32 _44; // 0x44
        //u32 _48; // 0x48
        //u16 mRetraceCount; // 0x4c
        //u16 _0x4E; // 0x4e
        //u32 _50; // 0x50
        //u32 _54; // 0x54
        //JUtility::TColor mClearColor; // 0x0058
        //u8 mCopyClamp; // 0x5c
        //u8 _5D; // 0x5d
        //u16 _5E; // 0x5e
        //JDrama::TVideo *mVideo;  // 0x0060
        //u16 _64; //0x0064
         // clear color 0x58

        //GXRenderModeObj mRenderObj;
        //u8 _40[0xC];
        //u16 _4E;
        //u32 _50[0x10 / 4];
        //u16 _64;
    };

}  // namespace JDrama