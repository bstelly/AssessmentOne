#pragma once
#include "Dungeon.h"
#include "MyString.h"
#include <iostream>

void Game()
{
	Player player;
	int numOfRows;
	int numOfCols;
	std::cout << "How many rows would you like the dungeon to have?" << std::endl;
	std::cin >> numOfRows;
	std::cout << "How many columns would you like the dungeon to have?" << std::endl;
	std::cin >> numOfCols;
	Dungeon dungeon(&player, numOfRows, numOfCols);
	while (dungeon.CheckPlayerPosition() == 0)
	{
		player.MovePlayer();
		dungeon.CheckPlayerPosition();
	} 

}