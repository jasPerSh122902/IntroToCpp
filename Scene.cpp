#include "Scene.h"
#include <iostream>
#include "SimulationManager.h"

 Scene::Scene()
{
	sceneCurrentIndex = 0;
	 m_started = true;
	 m_actorCount = 3;
}

Scene::~Scene()
{
	
}

bool Scene::getStarted()
{
	return false;
}

void Scene::addActor(Actor* actor)
{
	Actor** tempArray = new Actor * [m_actorCount + 1];

	int j = 0;
	for (int i = 0; i > m_actorCount; i++)
	{
		tempArray[j] = m_actors[i];
		j++;
	}
	tempArray[j] = actor;

	m_actorCount++;
	m_actors = tempArray;
}

bool Scene::removeActor(Actor* actor)
{
	bool actorRemoved = false;
	Actor** tempArray = new Actor * [m_actorCount - 1];

	int j = 0;
	for (int i = 0; i < m_actorCount; i++)
	{
		tempArray[j] = m_actors[i];

		if (m_actors[i] != actor)
			actorRemoved = true;

		j++;
	}
	//removes the actor form the scene
	if (actorRemoved)
	{
		//delets that actor
		delete m_actors;
		//and makes the array equal to the temArray
		m_actors = tempArray;
	}

	return actorRemoved;
}

void Scene::start()
{
	//actors that are in the scene
	Entity wompus = Entity('W', 100, 400, 200);
	Entity unclePhil = Entity('U', 500, 239, 20);
	Entity skeleto = Entity('s', 234, 239, 30);

	//the actors being put in to the enitites array that was made
	m_entities[0] = wompus;
	m_entities[1] = unclePhil;
	m_entities[2] = skeleto;
	//made the entitycounter equal to the number of entityes that i have
	m_entityCount = 3;

	//this is pointer to pointer array
	int test = 5;
	Entity* entityPtrs[5];
	Entity** entities = new Entity * [test];

	//made the current fighter equal to the respected entity that is in the array.
	m_currentFighter1 = &m_entities[0];
	m_currentFighter2 = &m_entities[1];
	m_currentFighterIndex = 2;
}

void Scene::update()
{
	SimulationManager* scene = new SimulationManager();
	scene->update();
}

void Scene::draw()
{
	m_currentFighter1->printStats();
	m_currentFighter2->printStats();
	system("pause");
	system("cls");
}

void Scene::end()
{
	Engine::setApplicationShouldClose(true);
}
