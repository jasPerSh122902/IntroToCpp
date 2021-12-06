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
	static Scene* getCurrentScene() { return m_scenes[m_currentSceneIndex]; }
	static void setCurrentSCene(int index) { m_currentSceneIndex = index; }
	
public:
	static Scene** m_scenes;
	static int m_sceneIndex;
	static bool m_applicationShouldClose;
	static int m_currentSceneIndex;
private:
	void start();
	void update();
	void draw();
	void end();


};
