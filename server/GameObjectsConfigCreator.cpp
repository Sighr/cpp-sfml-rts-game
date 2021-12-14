//
// Created by alex on 29.10.21.
//

#include <fstream>
#include "GameObjectsConfigCreator.h"
#include "components/ComponentFactory.h"

GameObjectsConfigCreator::GameObjectsConfigCreator(std::string& config_path)
	:
	config_path(config_path)
{

}

std::map<std::string, GameObject> GameObjectsConfigCreator::get_objects_from_config()
{
	std::map<std::string, GameObject> objects;
	std::ifstream file(config_path);
	json j;
	file >> j;
	auto& gameObjects = j["gameObjects"];
	ComponentFactory factory;
	for (auto& [go_name, go_components] : gameObjects.items())
	{
		GameObject go;
		for (auto& [component_name, component_args] : go_components.items())
		{
			auto args = ComponentArgs(component_args);
			const auto raw_component = factory.creators.at(component_name)(component_name, args);
			const auto component = std::shared_ptr<BaseComponent>(raw_component);
			go.add_component(component);
		}
		objects.insert(std::pair<std::string, GameObject>(go_name, go));
	}
	return objects;
}
