#pragma once

#include <JSystem/JDrama/JDRGraphics.hxx>
#include <JSystem/JSupport/JSUMemoryStream.hxx>
#include <SMS/graph/GraphTracer.hxx>
#include <SMS/graph/GraphWeb.hxx>
#include <SMS/mapobj/MapObjGeneral.hxx>

class TRailMapObj : public TMapObjBase {
public:
    enum RailStatus { ACTIVE, UNK_1, RESETTING };

    TRailMapObj(const char *);
    virtual ~TRailMapObj();

    virtual void load(JSUMemoryInputStream &) override;
    virtual void perform(u32, JDrama::TGraphics *) override;
    virtual void control() override;
    virtual u32 getShadowType() override;
    virtual void initMapObj() override;
    virtual void setGroundCollision() override;

    virtual bool calcRecycle();
    virtual void resetPosition();
    virtual void readRailFlag();

    bool checkMarioRiding();
    void initGraphTracer(TGraphWeb *);
    bool moveToNextNode(f32);
    void resetStep(f32);

    TGraphTracer *mGraphTracer;
    s32 mDistanceToNext;
    u32 _140;  // flags
    f32 mTravelSpeed;
    u8 mRailStatus;
    s16 mContextTimer;   // default = 180
    u8 mLastRailStatus;  // ?
};