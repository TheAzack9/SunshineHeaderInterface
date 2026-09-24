#pragma once

#include <Dolphin/types.h>

class J3DAnmBase;

class J3DAnmLoaderDataBase {
public:
    static J3DAnmBase *load(const void *data);
};
