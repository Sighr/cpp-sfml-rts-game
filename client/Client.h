//
// Created by alex on 29.03.2022.
//

#ifndef GAMESERVER_CLIENT_H
#define GAMESERVER_CLIENT_H


#include <memory>
#include "screens/BaseScreen.h"

class Client
{
public:
	void run();
	void setScreen(std::unique_ptr<BaseScreen> new_screen);
private:
	std::unique_ptr<BaseScreen> current_screen;
};


#endif //GAMESERVER_CLIENT_H
