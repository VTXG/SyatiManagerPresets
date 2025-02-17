#pragma once
#include "syati.h"

class PresetTarget_InternalName : public LiveActor {
public:
    PresetTarget_InternalName(const char *pName);

    virtual void init(const JMapInfoIter &rIter);
    virtual void control();
};