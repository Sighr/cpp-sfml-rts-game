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
	using CreatorFuntionPointer = BaseComponent*(*)(ComponentArgs&);
	const std::map<std::string, CreatorFuntionPointer> config_creators = {
		{HPComponent::component_name, CloneableBaseComponent<HPComponent>::createComponent},
		{CoordinateComponent::component_name, CloneableBaseComponent<CoordinateComponent>::createComponent},
		{DamageComponent::component_name, CloneableBaseComponent<DamageComponent>::createComponent},
		{SizeComponent::component_name, CloneableBaseComponent<SizeComponent>::createComponent}
	};
	
	template <AnyComponent T, typename ...Args>
	std::shared_ptr<T> create_component(Args ...args)
	{
		return std::make_shared<T>(args...);
	}
};


#endif //GAMESERVER_COMPONENTFACTORY_H
