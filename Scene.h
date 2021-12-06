#pragma once
#include "Actor.h"

class Scene
{
public:
	bool getStarted();
	void addActor(Actor* actor);
	bool removeActor(Actor* actor);

	virtual void start();
	virtual void update();
	virtual void draw();
	virtual void draw();

private:
	Actor** m_actor;
	bool m_started;
	int m_actorCount;
	int sceneIndex = 0;
};
