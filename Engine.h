#pragma once
#include "Entity.h"

//this file is meant to be a out line for the .cpp file that is partered to this file.
class Engine
{
public:
	Engine();
	~Engine();
	void run();
	static bool getApplicationShouldClose() { return m_applicationShouldClose; }
	static void setApplicationSHouldClose(bool value) { m_applicationShouldClose = value; }

	
private:
	void start();
	void update();
	void draw();
	void end();

private:
	static bool m_applicationShouldClose;
	Entity m_entities[3];
	Entity* m_currentFighter1;
	Entity* m_currentFighter2;


	int m_currentFighterIndex;
	int m_entityCount;


};
