#pragma once

#include <Dolphin/types.h>
#include <SMS/Map/PollutionPos.hxx>

#include <SMS/Map/Joint.hxx>

class TPollutionObj : public TJointObj {

public:
    u32 _00[0x10 / 4];   // 0x0020
    u32 mCleanedDegree;  // 0x0030
};