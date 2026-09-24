#pragma once

#include <Dolphin/MTX.h>
#include <Dolphin/types.h>
#include <JSystem/JDrama/JDRGraphics.hxx>

class TMario;

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
};

extern const char *cDirtyFileName;
extern const char *cDirtyTexName;
