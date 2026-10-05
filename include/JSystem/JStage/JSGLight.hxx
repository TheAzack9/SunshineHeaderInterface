#pragma once

#include <Dolphin/GX_types.h>
#include <Dolphin/MTX.h>
#include <JSystem/JStage/JSGObject.hxx>

namespace JStage {

enum TELight { TELIGHT_Unk0, TELIGHT_Unk1, TELIGHT_Unk2, TELIGHT_Unk3 };

class TLight : public TObject {
public:
    virtual ~TLight();
    virtual u32 JSGFGetType() const;
    virtual TELight JSGGetLightType() const;
    virtual void JSGSetLightType(TELight);
    virtual void JSGGetPosition(Vec *) const;
    virtual void JSGSetPosition(const Vec &);
    virtual GXColor JSGGetColor() const;
    virtual void JSGSetColor(GXColor);
    virtual void JSGGetDistanceAttenuation(f32 *, f32 *, GXDistAttnFn *) const;
    virtual void JSGSetDistanceAttenuation(f32, f32, GXDistAttnFn);
    virtual void JSGGetAngleAttenuation(f32 *, GXSpotFn *) const;
    virtual void JSGSetAngleAttenuation(f32, GXSpotFn);
    virtual void JSGGetDirection(Vec *) const;
    virtual void JSGSetDirection(const Vec &);
};

}
