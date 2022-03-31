//
// Created by alex on 30.03.2022.
//

#ifndef GAMESERVER_GAMESCREEN_H
#define GAMESERVER_GAMESCREEN_H


#include "../BaseScreen.h"
#include "../../Connection.h"

class GameScreen : public BaseScreen
{
public:
	explicit GameScreen(Connection&& connection);
	Status draw(sf::RenderWindow& window) override;
private:
	Status process_event(sf::Event& event, sf::Window& window, Client& client) override;
	Connection connection;
};


#endif //GAMESERVER_GAMESCREEN_H
