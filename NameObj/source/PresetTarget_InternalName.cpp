#include "PresetTarget_InternalName.h"

PresetTarget_InternalName::PresetTarget_InternalName(const char *pName) : LiveActor(pName) {

}

void PresetTarget_InternalName::init(const JMapInfoIter &rIter) {
    MR::connectToSceneMapObjMovement(this);
}

void PresetTarget_InternalName::movement() {

}