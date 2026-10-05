#pragma once

#include <JSystem/JDrama/JDRActor.hxx>

class MActor;

class TSky : public JDrama::TActor {
public:
    TSky(const char *);
    void load(JSUMemoryInputStream &) override;
    void perform(u32, JDrama::TGraphics *) override;

    MActor *mActor;
    f32 mRotation;
    f32 mRotationSpeed;
};
