//
// Created by alex on 30.03.2022.
//

#ifndef GAMESERVER_BASESCREEN_H
#define GAMESERVER_BASESCREEN_H


#include <SFML/Graphics.hpp>

class Client;

/**
 * Interface for FSM states to represent and process different screens
 */
class BaseScreen
{
public:
	enum Status
	{
		Success,
		Error,
	};
	
	/**
	 * @param event event that was polled
	 * @param window window for corresponding event
	 * @param client reference of a client to call setState on // TODO: create separate entity to perform FSM state change
	 * @return
	 */
	virtual Status process_event(sf::Event& event, sf::Window& window, Client& client) = 0;
	virtual Status draw(sf::RenderWindow& window) = 0;
};


#endif //GAMESERVER_BASESCREEN_H
