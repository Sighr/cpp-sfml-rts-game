//
// Created by alex on 14.12.2021.
//

#ifndef GAMESERVER_SIZECOMPONENT_H
#define GAMESERVER_SIZECOMPONENT_H


#include "CloneableBaseComponent.h"
struct SizeComponent : public CloneableBaseComponent<SizeComponent>
{
    explicit SizeComponent(ComponentArgs& args);
    SizeComponent(float x, float y);
    float x;
    float y;
	inline static const std::string component_name = "size";
};


#endif //GAMESERVER_SIZECOMPONENT_H
