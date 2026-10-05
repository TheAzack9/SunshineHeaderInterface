#pragma once

#include <Dolphin/types.h>

union J3DGXColorS10 {
    struct {
        s16 r;
        s16 g;
        s16 b;
        s16 a;
    } rgba;
    u64 value;
};

union J3DGXColor {
    struct {
        u8 r;
        u8 g;
        u8 b;
        u8 a;
    } rgba;
    u32 value;
};

class J3DColorChan;
class J3DLightObj;

class J3DColorBlock {
public:
    virtual void reset(J3DColorBlock *);
    virtual s32 countDLSize() = 0;
    virtual u32 getType() = 0;
    virtual void setMatColor(u32, const J3DGXColor *) = 0;
    virtual void setMatColor(u32, J3DGXColor) = 0;
    virtual J3DGXColor *getMatColor(u32) = 0;
    virtual void setAmbColor(u32, const J3DGXColor *) = 0;
    virtual void setAmbColor(u32, J3DGXColor) = 0;
    virtual J3DGXColor *getAmbColor(u32) = 0;
    virtual void setColorChanNum(u8) = 0;
    virtual void setColorChanNum(const u8 *) = 0;
    virtual u8 getColorChanNum() const = 0;
    virtual void setColorChan(u32, const J3DColorChan &) = 0;
    virtual void setColorChan(u32, const J3DColorChan *) = 0;
    virtual J3DColorChan *getColorChan(u32) = 0;
    virtual void setLight(u32, J3DLightObj *) = 0;
    virtual J3DLightObj *replaceLight(u32, J3DLightObj *) = 0;
    virtual J3DLightObj *getLight(u32) = 0;
    virtual void setCullMode(const u8 *) = 0;
    virtual void setCullMode(u8) = 0;
    virtual u8 getCullMode() const = 0;
    virtual ~J3DColorBlock();
    virtual void load() = 0;
};
