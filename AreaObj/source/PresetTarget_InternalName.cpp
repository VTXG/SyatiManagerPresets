#include "PresetTarget_InternalName.h"

PresetTarget_InternalName::PresetTarget_InternalName(const char *pName) : AreaObj(pName) {

}

void PresetTarget_InternalName::init(const JMapInfoIter &rIter) {
    AreaObj::init(rIter);
    MR::connectToSceneAreaObj(this);
}

void PresetTarget_InternalName::movement() {

}

const char* PresetTarget_InternalName::getManagerName() const {
    return "PresetTarget_InternalName";
}