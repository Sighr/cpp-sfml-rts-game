//
// Created by alex on 29.10.21.
//

#ifndef GAMESERVER_GAMEOBJECTFACTORY_H
#define GAMESERVER_GAMEOBJECTFACTORY_H


#include "GameObjectsConfigCreator.h"

class GameObjectFactory
{
public:
	explicit GameObjectFactory(std::string& config_path, std::map<GameObjectId, GameObject>& registered_objects);
	GameObject create_object(std::string name);
private:
	GameObjectsConfigCreator creator;
	std::map<std::string, GameObject> object_templates;
	std::map<GameObjectId, GameObject>& registered_objects;
	int id_counter;
};


#endif //GAMESERVER_GAMEOBJECTFACTORY_H
