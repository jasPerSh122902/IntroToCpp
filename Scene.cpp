#include "Scene.h"
#include <iostream>
#include "SimulationManager.h"

Scene::Scene()
{

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
}

bool Scene::removeActor(Actor* actor)
{
	return false;
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

}
