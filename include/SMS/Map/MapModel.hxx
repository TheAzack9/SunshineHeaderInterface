#pragma once

#include <SMS/Manager/JointModelManager.hxx>

class TMapCollisionStatic;

class TMapModelManager : public TJointModelManager {
public:
    TMapModelManager(const char *);
    void init();

    u8 _24[0x48];
    TMapCollisionStatic *mCollision;
};
