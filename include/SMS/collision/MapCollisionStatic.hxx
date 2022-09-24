#pragma once

#include <Dolphin/types.h>

#include <SMS/actor/LiveActor.hxx>
#include <SMS/collision/MapCollisionBase.hxx>

class TMapCollisionStatic : public TMapCollisionBase {
public:
    TMapCollisionStatic();

    virtual void init(const char *, u16, const TLiveActor *) override;
    virtual void remove() override;
    virtual void setUp() override;

    TLiveActor *mActor;  // _60
};