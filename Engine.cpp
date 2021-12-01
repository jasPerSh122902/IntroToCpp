#include "Engine.h"

bool Engine::m_applicationShouldClose = false;

//constructor for the engine class
Engine::Engine()
{
	m_applicationShouldClose = false;
	m_entityCount = 0;

}

//definition that is run
void Engine::run()
{
	//starts the application
	start();

	//runs the loop to see if the application should close
	while (!getApplicationShouldClose())
	{
		//updates and draws
		update();
		draw();
	}

	//ends the application
	end();
}


void Engine::start()
{
	Entity wompus = Entity('W', 130002, 40002, 2383);
	Entity unclePhil = Entity('U', 234544, 233249, 230);
	Entity skeleto = Entity('s', 234544, 233249, 230);

	m_entities[0] = wompus;
	m_entities[1] = unclePhil;
	m_entities[2] = skeleto;
}

void Engine::update()
{

}

void Engine::draw()
{

}

void Engine::end()
{

}
