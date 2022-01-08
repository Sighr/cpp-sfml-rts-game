//
// Created by alex on 22.11.2021.
//

#ifndef GAMESERVER_COMPONENTFACTORY_H
#define GAMESERVER_COMPONENTFACTORY_H

#include <map>
#include "BaseComponent.h"
#include "ComponentArgs.h"
#include "CloneableBaseComponent.h"
#include "HPComponent.h"
#include "CoordinateComponent.h"
#include "DamageComponent.h"
#include "SizeComponent.h"

struct ComponentFactory
{
	using CreatorFuntionPointer = BaseComponent*(*)(std::string, ComponentArgs&);
	const std::map<std::string, CreatorFuntionPointer> creators = {
		{"hp", CloneableBaseComponent<HPComponent>::createComponent},
		{"coord", CloneableBaseComponent<CoordinateComponent>::createComponent},
		{"dmg", CloneableBaseComponent<DamageComponent>::createComponent},
		{"size", CloneableBaseComponent<SizeComponent>::createComponent}
	};
};


#endif //GAMESERVER_COMPONENTFACTORY_H
