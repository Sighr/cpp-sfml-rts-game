//
// Created by alex on 30.03.2022.
//

#ifndef GAMESERVER_BUTTON_H
#define GAMESERVER_BUTTON_H


#include "BaseWidget.h"

class Button : public BaseWidget
{
public:
	Button(const std::string& name, float x, float y);
	void process_event(sf::Event& event, sf::Window& window) override;
	void draw(sf::RenderWindow& window) override;
	bool is_clicked;
	
	sf::RectangleShape background;
	sf::Text text;
};


#endif //GAMESERVER_BUTTON_H
