#pragma once

#include <JSystem/J2D/J2DPane.hxx>
#include <JSystem/JUtility/JUTRect.hxx>

class J2DWindow : public J2DPane {
public:
    class Texture;

    J2DWindow(J2DPane *, JSURandomInputStream *, bool);

    JUTRect mFillRect;
    void *_FC;
    Texture *mTextures[5];
    u32 _114;
    JUtility::TColor mFillColors[4];
    JUtility::TColor mColorMask;
    JUtility::TColor mColorOverlay;
    u32 _130[3];
};
