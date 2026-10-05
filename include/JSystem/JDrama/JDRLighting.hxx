#pragma once

#include <Dolphin/GX_types.h>
#include <JSystem/JDrama/JDRPlacement.hxx>
#include <JSystem/JStage/JSGAmbientLight.hxx>
#include <JSystem/JStage/JSGLight.hxx>
#include <JSystem/JUtility/JUTColor.hxx>

namespace JDrama {

class TLight : public TPlacement, public JStage::TLight {
public:
    TLight(const char *);
    void load(JSUMemoryInputStream &) override;
    void perform(u32, TGraphics *) override;

    GXLightObj mLight;
    JStage::TELight mLightType;
};

class TIdxLight : public TLight {
public:
    TIdxLight(const char *);
    u32 mIndex;
};

class TLightAry : public TViewObj {
public:
    TLightAry(const char *);
    void load(JSUMemoryInputStream &) override;
    TNameRef *searchF(u16, const char *) override;
    void perform(u32, TGraphics *) override;
    void setLightNum(s32);

    TIdxLight *mLights;
    s32 mLightCount;
};

class TAmbColor : public TViewObj, public JStage::TAmbientLight {
public:
    TAmbColor(const char *);
    void load(JSUMemoryInputStream &) override;
    void perform(u32, TGraphics *) override;
    virtual GXColor JSGGetColor() const;
    virtual void JSGSetColor(GXColor);

    JUtility::TColor mColor;
};

class TAmbAry : public TViewObj {
public:
    TAmbAry(const char *);
    void load(JSUMemoryInputStream &) override;
    TNameRef *searchF(u16, const char *) override;
    void perform(u32, TGraphics *) override;
    void setAmbNum(s32);

    TAmbColor *mAmbColors;
    s32 mAmbColorCount;
};

}
