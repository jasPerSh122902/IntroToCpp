#include "StartScene.h"
#include <iostream>

void StartScene::draw()
{
	std::cout << "Hellow this is the battle simulation" << std::endl;
	std::cout << "Press 1: to Start\n"
				  "Press 2: to Quit" << std::endl;
}

void StartScene::update()
{
	int input;
	std::cin >> input;
	if (input == 1)
		Scene::sceneCurrentIndex++;
	if (input == 2)
		Scene::end();
		
}

StartScene::StartScene()
{
	
}