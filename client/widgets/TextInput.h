//
// Created by alex on 30.03.2022.
//

#ifndef GAMESERVER_TEXTINPUT_H
#define GAMESERVER_TEXTINPUT_H


#include "BaseWidget.h"
#include <SFML/Graphics.hpp>

class TextInput : public BaseWidget
{
public:
	TextInput(float x, float y, float width);
	void process_event(sf::Event& event, sf::Window& window) override;
	void draw(sf::RenderWindow& window) override;
	sf::RectangleShape placeholder;
	sf::Text text;
	sf::String string;
	bool focused = false;
};


#endif //GAMESERVER_TEXTINPUT_H
