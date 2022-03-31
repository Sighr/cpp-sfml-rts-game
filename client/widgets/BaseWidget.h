//
// Created by alex on 30.03.2022.
//

#ifndef GAMESERVER_BASEWIDGET_H
#define GAMESERVER_BASEWIDGET_H


#include <SFML/Graphics.hpp>

/**
 * interface for UI widgets
 */
class BaseWidget
{
public:
	virtual void process_event(sf::Event& event, sf::Window& window) = 0;
	virtual void draw(sf::RenderWindow& window) = 0;
};


#endif //GAMESERVER_BASEWIDGET_H
