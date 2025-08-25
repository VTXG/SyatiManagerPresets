#include "PresetTarget_InternalName.h"

PresetTarget_InternalName::PresetTarget_InternalName(const char *pName) : LayoutActor(pName, false) {

}

void PresetTarget_InternalName::init(const JMapInfoIter &rIter) {
    initLayoutManager("PresetTarget_InternalName", 1);
    MR::connectToSceneLayout(this);
}

void PresetTarget_InternalName::control() {

}