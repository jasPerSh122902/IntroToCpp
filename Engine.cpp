#include "Engine.h"
#include "Scene.h"
#include <iostream>

bool Engine::m_applicationShouldClose = true;

//constructor for the engine class
Engine::Engine()
{
	m_applicationShouldClose = false;
}

Engine::~Engine()
{

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

void Engine::addScene(Scene* scene)
{

}

Scene* Engine::getCurrentScene()
{
	return nullptr;
}

void Engine::setCurrentSCene(int index)
{
}


void Engine::start()
{
	
}

void Engine::draw()
{

}

///updates the current engine.
void Engine::update()
{


}

void Engine::end()
{

}
