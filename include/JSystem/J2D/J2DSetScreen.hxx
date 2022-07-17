#pragma once

#include <Dolphin/types.h>
#include <JSystem/J2D/J2DScreen.hxx>
#include <JSystem/JKernel/JKRArchivePri.hxx>

class J2DSetScreen : public J2DScreen {
public:
    J2DSetScreen(const char *, JKRArchive *);
    virtual ~J2DSetScreen();
};