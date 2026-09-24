#pragma once

#include <Dolphin/MTX.h>
#include <Dolphin/types.h>
#include <JSystem/J3D/J3DAnimation.hxx>
#include <JSystem/J3D/J3DCluster.hxx>
#include <JSystem/J3D/J3DJoint.hxx>
#include <JSystem/J3D/J3DNode.hxx>
#include <JSystem/J3D/J3DVertex.hxx>
#include <JSystem/JGeometry/JGMVec.hxx>
#include <JSystem/JUtility/JUTNameTab.hxx>

class J3DModelHierarchy;
class J3DMaterial;
class J3DNode;
class J3DShape;

class J3DModelData {
public:
    J3DModelData();
    virtual ~J3DModelData();

    void clear();
    bool entryMatColorAnimator(J3DAnmColor *);
    bool entryTevRegAnimator(J3DAnmTevRegKey *);
    bool entryTexMtxAnimator(J3DAnmTextureSRTKey *);
    bool isDeformableVertexFormat() const;
    void makeHierarchy(J3DNode *, const J3DModelHierarchy **);
    bool removeMatColorAnimator(J3DAnmColor *);
    bool removeTevRegAnimator(J3DAnmTevRegKey *);
    bool removeTexMtxAnimator(J3DAnmTextureSRTKey *);
    void setMatColorAnimator(J3DAnmColor *, J3DMatColorAnm *);
    void setTevRegAnimator(J3DAnmTevRegKey *, J3DTevKColorAnm *);
    void setTexMtxAnimator(J3DAnmTextureSRTKey *, J3DTexNtxAnm *);
    void setTexNoAnimator(J3DAnmTexPattern *, J3DTexNoAnm *);

    u16 getMaterialNum() const { return mMaterialNum; }
    J3DMaterial *getMaterialNodePointer(u16 index) const { return mMaterials[index]; }

    u32 _4;
    u32 _8;
    u32 _C;
    u32 _10;
    u32 _14;
    u16 _18;
    u16 _1A;
    u16 mJointNum;
    J3DJoint **mJoints;
    u16 mMaterialNum;
    J3DMaterial **mMaterials;
    u16 mShapeNum;
    J3DShape **mShapes;
    u16 _34;
    u32 _38;
    J3DVertexData mVertexData;  // _3C
    u32 _80;
    u16 _84;
    u16 _86;  // padding?
    u32 _88;
    u32 _8C;
    u32 _90;
    u32 _94;
    J3DDrawMtxData mDrawMtxData;  // _98
    u16 *mCurrentJointIndex;
    u32 _A4;
    u32 _A8;
    u32 _AC;
    u32 _B0;
    u32 _B4;
    u32 _B8;
};

class J3DModel {
public:
    J3DModel(J3DModelData *, u32, u32);

    virtual void update();
    virtual void entry();
    virtual void calc();
    virtual ~J3DModel();

    void calcBBoard();
    void calcBumpMtx();
    void calcNrmMtx();
    void calcWeightEnvelopeMtx();
    void entryModelData(J3DModelData *, u32, u32);
    void initialize();
    void lock();
    void unlock();
    void makeDL();
    void prepareShapePackets();
    void setSkinDeform(J3DSkinDeform *, J3DDeformAttachFlag);
    void viewCalc();

    J3DModelData *mModelData;
    u32 _8;
    u32 _C;
    u32 _10;
    TVec3f mBaseScale;
    Mtx mBaseMtx;
    u32 _50;
    u32 _54;
    Mtx *mJointArray;  // First is the result of concatenations
    u32 _5C;
    u32 _60;
    u32 _64;
    u32 _68;
    u32 _6C;
    u32 _70;
    u32 _74;
    u32 _78;
    u32 _7C;
    u32 _80;  // display list
    u32 _84;
    u32 _88;
    J3DSkinDeform *mSkinDeform;
    u32 _90;
    u32 _94;
    J3DVertexBuffer mVtxBuffer;
};

class J3DModelHierarchy {};
