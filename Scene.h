#pragma once
#include "Actor.h"
#include "Entity.h"

class Scene
{
public:
	Scene();
	~Scene();
	bool getStarted();
	void addActor(Actor* actor);
	bool removeActor(Actor* actor);

	virtual void start();
	virtual void update();
	virtual void draw();
	virtual void end();

	Entity m_entities[3];
	Entity* m_currentFighter1;
	Entity* m_currentFighter2;


	int m_currentFighterIndex;
	int m_entityCount;



private:

	Actor** m_actor;
	bool m_started;
	int m_actorCount;
	int scenecurrentIndex = 0;


};
