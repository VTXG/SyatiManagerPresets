#include "PresetTarget_InternalName.h"

PresetTarget_InternalName::PresetTarget_InternalName(const char *pName) : LiveActor(pName) {

}

void PresetTarget_InternalName::init(const JMapInfoIter &rIter) {
    MR::initDefaultPos(this, rIter);
    MR::processInitFunction(this, rIter, false);
    MR::connectToSceneMapObj(this);

    makeActorAppeared();
}

void PresetTarget_InternalName::control() {

}