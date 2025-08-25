#pragma once
#include "syati.h"

class PresetTarget_InternalName : public LayoutActor {
public:
    PresetTarget_InternalName(const char *pName);

    virtual void init(const JMapInfoIter &rIter);
    virtual void control();
};