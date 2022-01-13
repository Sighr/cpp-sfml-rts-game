//
// Created by alex on 29.10.21.
//

#ifndef GAMESERVER_CLONEABLEBASECOMPONENT_H
#define GAMESERVER_CLONEABLEBASECOMPONENT_H

#include "BaseComponent.h"
#include "ComponentArgs.h"

template<typename ConcreteComponent>
class CloneableBaseComponent : public BaseComponent {
public:
	explicit CloneableBaseComponent(const std::string& name)
		: BaseComponent(name)
	{
	
	}
	
	[[nodiscard]] BaseComponent* clone() const override
	{
		return new ConcreteComponent(static_cast<const ConcreteComponent&>(*this));
	}
	
	[[nodiscard]] static BaseComponent* createComponent(ComponentArgs& args)
	{
		return new ConcreteComponent(args);
	}
};


#endif //GAMESERVER_CLONEABLEBASECOMPONENT_H
