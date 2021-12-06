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
	/*char input[100];
	std::cin.getline(input, sizeof(input));
	std::string.stream stream(input);
	while (stream.rdbuf()->in_avail() != 0) {
		int n;
		stream >> n;
		numbers.push_back(n)*/
}
