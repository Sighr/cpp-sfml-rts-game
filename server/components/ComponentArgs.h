//
// Created by alex on 22.11.2021.
//

#ifndef GAMESERVER_COMPONENTARGS_H
#define GAMESERVER_COMPONENTARGS_H


#include <nlohmann/json.hpp>

using json = nlohmann::json;

class ComponentArgs
{
public:
	explicit ComponentArgs(json& j);
	template<typename T>
	T get_arg(int idx)
	{
		try
		{
			auto value = data[idx].get<T>();
			return value;
		}
		catch (json::exception& e)
		{
			// TODO: add some logging
			throw e;
		}
	}
private:
	json data;
};


#endif //GAMESERVER_COMPONENTARGS_H
