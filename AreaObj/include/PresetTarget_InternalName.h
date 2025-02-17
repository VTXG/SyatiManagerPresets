#pragma once
#include "syati.h"

class PresetTarget_InternalName : public AreaObj {
public:
    PresetTarget_InternalName(const char *pName);

    virtual void init(const JMapInfoIter &rIter);
    virtual void movement();
    virtual const char* getManagerName() const;
};