#pragma once

#include <Dolphin/types.h>

class JPAEmitterManager;

class TSelectShineManager {
public:
    void initData(u8 *selectionStates, u8 episodeCount, u8 selectedEpisode,
                  JPAEmitterManager *emitterManager);
};
