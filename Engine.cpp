#include "Engine.h"
#include "StartScene.h"
#include "BattleScene.h"
#include <iostream>

bool Engine::m_applicationShouldClose = false;
int Engine::m_sceneIndex = 0;
int Engine::m_currentSceneIndex = 0;
Scene** Engine::m_scenes = new Scene * [0];

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
void Engine::start()
{
	StartScene* startScene = new StartScene();

	addScene(startScene);
}

void Engine::draw()
{
	m_scenes[m_currentSceneIndex]->draw();
}

///updates the current engine.
void Engine::update()
{
	m_scenes[m_currentSceneIndex]->update();

}

void Engine::end()
{
	m_scenes[m_currentSceneIndex ]->end();
}
