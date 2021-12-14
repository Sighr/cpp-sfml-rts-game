//
// Created by alex on 29.10.21.
//

#ifndef GAMESERVER_GAMEOBJECTSCONFIGCREATOR_H
#define GAMESERVER_GAMEOBJECTSCONFIGCREATOR_H

#include <string>
#include <nlohmann/json.hpp>
#include "GameObject.h"

using json = nlohmann::json;

class GameObjectsConfigCreator
{
public:
	explicit GameObjectsConfigCreator(std::string& config_path);
	std::map<std::string, GameObject> get_objects_from_config();
private:
	std::string config_path;
};


#endif //GAMESERVER_GAMEOBJECTSCONFIGCREATOR_H
