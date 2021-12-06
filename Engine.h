#pragma once
#include "Entity.h"
#include "Scene.h"
//this file is meant to be a out line for the .cpp file that is partered to this file.
class Engine
{
public:
	Engine();
	~Engine();
	void run();

	static bool getApplicationShouldClose() { return m_applicationShouldClose; }
	static void setApplicationShouldClose(bool value) { m_applicationShouldClose = value; }

	static void addScene(Scene* scene);
	static Scene* getCurrentScene();
	static void setCurrentSCene(int index);
	
private:
	void start();
	void update();
	void draw();
	void end();

private:
	static bool m_applicationShouldClose;
	

	Scene** m_scenes;
	int m_sceneCount;
};
