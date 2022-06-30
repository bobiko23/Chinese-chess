#pragma once

#include <fstream>

#include "State.h"
#include "Grid.h"
#include "ConfigManager.h"

class Game : public State
{
public:

	Game();
	~Game();
	
	int gameMode;
	
	Grid m_grid;

	void init();
	void destroy();
	void run();
};