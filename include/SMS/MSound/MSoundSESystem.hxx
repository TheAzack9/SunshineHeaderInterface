#pragma once

#include <Dolphin/types.h>
#include <JSystem/JAudio/JAISound.hxx>
#include <JSystem/JGeometry/JGMVec.hxx>
#include <JSystem/JSupport/JSUList.hxx>

class JAIActor {};

namespace MSoundSESystem {
    class MSRandPlayVec {
    public:
        MSRandPlayVec();
        ~MSRandPlayVec();

        const Vec *mTranslation;
        u8 mActive;
        s32 mDelay;
        s32 mTimer;
        JSUPtrLink mLink;
        JAISound *mSound;
    };

    class MSRandPlay {
    public:
        JSUPtrLink mLink;
        MSRandPlayVec *mVectors;
        u16 mCapacity;
        u16 mUsed;

        MSRandPlay(u32, s32, s32, f32, f32);
        virtual void randPlay(u32);

        static void construct(u32, s32, s32, f32, f32);
        static void createRandPlayVec(u32, u16);
        static int registerTrans(u32, const Vec *);
        static void startSeRandPlay(u32, u32);
        static JSUList<MSRandPlay> smList;

        u32 mSoundID;
        s32 mMinimumDelay;
        s32 mMaximumDelay;
        f32 mChance;
        f32 mChanceVariance;
    };

    class MSoundSE {
    public:
        static bool checkMonoSound(u32, JAIActor *);
        static bool checkSoundArea(u32, const Vec &);
        static void construct();
        static u32 getNewIDBySurfaceCode(u32, JAIActor *);
        static u32 getRandomID(u32);
        static JAISound *startSoundActor(u32, const Vec *, u32, JAISound **, u32, u8);
        static JAISound *startSoundActorInner(u32, JAISound **, JAIActor *, u32, u8);
        static JAISound *startSoundActorWithInfo(u32, const Vec *, Vec *, f32, u32, u32,
                                                 JAISound **, u32, u8);
        static JAISound *startSoundNpcActor(u32, const Vec *, u32, JAISound **, u32, u8);
        static JAISound *startSoundSystemSE(u32 soundID, u32, JAISound **, u32);
    };
};  // namespace MSoundSESystem

using namespace MSoundSESystem;
