#pragma once

#include <Dolphin/GX_types.h>

enum EPacketColorType {
    PACKET_TEV_COLOR = 1,
    PACKET_TWO_TEV_COLORS = 2,
    PACKET_THREE_TEV_COLORS = 3,
    PACKET_TEV_COLOR_AND_K_COLOR = 9,
    PACKET_TWO_TEV_COLORS_AND_K_COLOR = 10,
};

struct TPacketTevColor {
    u32 mType;
    GXTevRegID mRegister;
    const GXColorS10 *mColor;
};

struct TPacketTwoTevColors {
    u32 mType;
    GXTevRegID mRegisters[2];
    const GXColorS10 *mColors[2];
};

struct TPacketThreeTevColors {
    u32 mType;
    GXTevRegID mRegisters[3];
    const GXColorS10 *mColors[3];
};

struct TPacketTevColorAndKColor {
    TPacketTevColor mTev;
    const GXColor *mKColor;
};

struct TPacketTwoTevColorsAndKColor {
    TPacketTwoTevColors mTev;
    const GXColor *mKColor;
};
