#pragma once

#include <Dolphin/MTX.h>
#include <Dolphin/types.h>
#include <JSystem/JDrama/JDRGraphics.hxx>

class TMario;
class J3DModel;
class TMultiMtxEffect;
class TMirrorActor;
class TTrembleModelEffect;

class TMarioCap {
public:
    enum EModelFlag : u16 {
        MODEL_HAT        = 1,
        MODEL_HELMET     = 2,
        MODEL_SUNGLASSES = 4,
    };

    TMarioCap(TMario *);

    virtual void perform(u32, JDrama::TGraphics *);

    void createMirrorModel();
    void mtxEffectHide();
    void mtxEffectShow();

    void setModelActive(EModelFlag model) { mActiveModelFlags |= model; }
    void setModelInactive(EModelFlag model) { mActiveModelFlags &= ~model; }

    u16 mActiveModelFlags;  // 0x0004
    u16 _06;
    TMario *mMario;
    J3DModel *mCurrentModel;
    J3DModel *mModels[4];
    TMultiMtxEffect *mEffects[2];
    TMirrorActor *mMirrorModels[2];
    TTrembleModelEffect *mTrembleEffect;
    f32 _34;
};

extern const char *cDirtyFileName;
extern const char *cDirtyTexName;
