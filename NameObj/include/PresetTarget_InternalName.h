#pragma once
#include "syati.h"

class PresetTarget_InternalName : public NameObj {
public:
    PresetTarget_InternalName(const char *pName);

    virtual void init(const JMapInfoIter &rIter);
    virtual void movement();
};