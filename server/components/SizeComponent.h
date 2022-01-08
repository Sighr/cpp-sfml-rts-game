//
// Created by alex on 14.12.2021.
//

#ifndef GAMESERVER_SIZECOMPONENT_H
#define GAMESERVER_SIZECOMPONENT_H


#include "CloneableBaseComponent.h"
struct SizeComponent : public CloneableBaseComponent<SizeComponent>
{
    SizeComponent(std::string& name, ComponentArgs& args);
    SizeComponent(std::string& name, float x, float y);
    float x;
    float y;
};


#endif //GAMESERVER_SIZECOMPONENT_H
