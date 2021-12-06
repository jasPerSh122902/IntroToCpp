#pragma once
#include "Actor.h"
#include "Entity.h"

class Scene
{
public:
	//constructor for actor
	Scene();
	//a destructor for actor
	~Scene();
	//makes the scenes start
	bool getStarted();
	//adds the actor to the scene
	void addActor(Actor* actor);
	//removes the actor form the scene
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

	int sceneCurrentIndex = 0;

private:

	//this is the example of the pointer pointer array that can decrease and increase.
	int test = 5;
	Entity* entityPtrs[5];
	Entity** entities = new Entity * [test];

	Actor** m_actors;
	bool m_started;
	int m_actorCount;
	
};
