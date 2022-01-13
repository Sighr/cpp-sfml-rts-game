//
// Created by alex on 06.08.21.
//

#include "GameObject.h"
#include "components/CoordinateComponent.h"

void GameObject::add_component(std::shared_ptr<BaseComponent> component)
{
	if (components.find(component->name) != components.end())
		throw std::runtime_error("Trying to add component " + component->name + " twice");
	components[component->name] = component;
}

void GameObject::remove_component(std::string& name)
{
	auto iterator = components.find(name);
	if (iterator != components.end())
		components.erase(iterator);
}

GameObject::GameObject(const GameObject& other)
{
	// TODO: think about flyweight pattern and maybe implement
	for (auto& pair : other.components)
	{
		add_component(std::shared_ptr<BaseComponent>(pair.second->clone()));
	}
}

GameObject::GameObject(GameObject&& other)
{
	components = other.components;
}

std::optional<std::shared_ptr<BaseComponent>> GameObject::get_component_safe(std::string& name)
{
	auto iterator = components.find(name);
	if (iterator != components.end())
		return iterator->second;
	return {};
}

std::shared_ptr<BaseComponent> GameObject::get_component_or_fail(std::string& name)
{
	try {
		auto to_return = components[name];
		return to_return;
	}
	catch(std::exception& e)
	{
		// TODO: logging
		throw e;
	}
}

// TODO: delete it
void GameObject::set_initial_coordinates(float x, float y)
{
	add_component(std::shared_ptr<BaseComponent>(new CoordinateComponent(x, y)));
}
