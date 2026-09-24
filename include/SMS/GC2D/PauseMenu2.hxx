#pragma once

#include <Dolphin/types.h>
#include <JSystem/JDrama/JDRViewObj.hxx>

class J2DSetScreen;

class TPauseMenu2 : public JDrama::TViewObj {
public:
    u32 mState;            // 0x0010
    J2DSetScreen *mScreen; // 0x0014
    u8 _18[0xEC];          // 0x0018
    s32 mNumItems;         // 0x0104
};
