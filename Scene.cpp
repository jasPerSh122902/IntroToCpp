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
	m_actors.addActor(actor);
}

bool Scene::removeActor(Actor* actor)
{
	m_actors.removeActor(actor);
}

bool Scene::removeActor(int index)
{
	m_actors.removeActor(index);
}

void Scene::start()
{
	m_started = true;
}

void Scene::update()
{
	for (int i = 0; i < m_actors.getLength(); i++)
	{
		if (!m_actors.getActor(i)->getStarted())
			m_actors.getActor(i)->start();

		m_actors.getActor(i)->update();
	}
	
}

void Scene::draw()
{
	for (int i = 0; i < m_actors.getLength(); i++);
}

void Scene::end()
{
	Engine::setApplicationShouldClose(true);
}
