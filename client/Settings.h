//
// Created by alex on 30.03.2022.
//

#ifndef GAMESERVER_SETTINGS_H
#define GAMESERVER_SETTINGS_H


#include <SFML/Graphics.hpp>

// load from config
struct Settings
{
	// add custom font to client folder
	const inline static sf::Font font = [](){
		sf::Font f;
		f.loadFromFile("/usr/share/fonts/truetype/open-sans/OpenSans-Regular.ttf");
		return f;
	}();
};


#endif //GAMESERVER_SETTINGS_H
