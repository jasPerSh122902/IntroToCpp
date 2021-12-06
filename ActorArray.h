#pragma once

class Actor;

class ActorArray
{
private:
	Actor** m_actors;
	int m_actorsCount;
public:
	void addActor(Actor* actor);
	bool removeActor(Actor* actor);
	bool removeActor(int index);

	Actor* getActor(int index);

	int getLength() { return m_actorsCount; }

	bool contains(Actor* actor);


};

