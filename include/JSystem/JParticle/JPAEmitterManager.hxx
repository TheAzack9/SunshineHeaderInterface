#pragma once

#include <JSystem/JGeometry/JGMVec.hxx>
#include <JSystem/JParticle/JPABaseParticle.hxx>

class JPABaseEmitter;
class JPABaseParticle;

class JPAEmitterManager {
public:
    JPABaseEmitter *createSimpleEmitterID(
        const TVec3f &, s32, u8, u8, JPACallBackBase<JPABaseEmitter *> *,
        JPACallBackBase2<JPABaseEmitter *, JPABaseParticle *> *);
};
