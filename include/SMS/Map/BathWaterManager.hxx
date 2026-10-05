#pragma once

#include <JSystem/JDrama/JDRViewObj.hxx>
#include <SMS/System/Params.hxx>

class TBathtub;
class TBathWater;
class TBathWaterParams;
class TBathWaterRenderer;
class TBathWaterManager;

class TBathWaterGlobalParams : public TParams {
public:
    TBathWaterGlobalParams();

    TParamRT<u8> regR;
    TParamRT<u8> regG;
    TParamRT<u8> regB;
    TParamRT<u8> regA;
    TParamRT<u8> kRegR;
    TParamRT<u8> kRegG;
    TParamRT<u8> kRegB;
    TParamRT<u8> kRegA;
    TParamRT<u8> polygonR;
    TParamRT<u8> polygonG;
    TParamRT<u8> polygonB;
    TParamRT<f32> indTexScale;
    TParamRT<u8> showsCap;
    TParamRT<u8> bendsNormal;
    TParamRT<u8> showsMist;
    TParamRT<u8> clearsAlpha;
    TParamRT<u8> alpha;
    TParamRT<u8> scrolls;
    TParamRT<u8> displaysMesh;
    TParamRT<u8> mode;
    TParamRT<u8> mask;
    TParamRT<s32> indirectScale;
    TParamRT<s32> scrollSpan;
    TParamRT<s32> meshTexWidth;
    TParamRT<f32> envMapScale;
    TParamRT<f32> capHeight;
    TParamRT<f32> meshWidth;
};

class TBathWaterPreprocessor : public JDrama::TViewObj {
public:
    TBathWaterPreprocessor(TBathWaterManager *);
    void perform(u32, JDrama::TGraphics *) override;

    TBathWaterManager *mManager;
};

class TBathWaterManager : public JDrama::TViewObj {
public:
    TBathWaterManager();
    void load(JSUMemoryInputStream &) override;
    void loadAfter() override;
    void perform(u32, JDrama::TGraphics *) override;

    u32 mRandomState;
    TBathWaterParams **mParams;
    TBathWaterGlobalParams *mGlobalParams;
    u8 _1C;
    TBathWater **mWaters;
    TBathtub *mBathtub;
    TBathWaterRenderer *mRenderers[2];
    TBathWaterRenderer *mRenderer;
    TBathWaterPreprocessor mPreprocessor;
};
