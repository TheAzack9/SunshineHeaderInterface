#pragma once

#include <Dolphin/types.h>

class ResNTab {};

class JUTNameTab {
public:
    JUTNameTab(const ResNTab *);  // ResNTab*

    s32 getIndex(const char *name) const;
    u16 calcKeyCode(const char *name) const;
    const char *getName(u16) const;

    ResNTab *mResTab;  // ResNTab*
    u32 _4;
    u16 _8;
};
