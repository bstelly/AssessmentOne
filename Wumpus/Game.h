#pragma once
#include "Dungeon.h"
#include "MyString.h"
#include <iostream>

void DisplayInstructions()
{
	system("cls");
	cout << endl;
	cout << "				Instructions:" << endl;
	cout << endl;
	cout << "The goal of Wumpus World is to find the treasure that is hidden in the ";
	cout << "dungeon.\n";
	cout << "You will have to be careful, though, because the dungeon is inhabited by\n ";
	cout << "a creature known as the 'Wumpus', who will eat you if you run into him.\n ";
	cout << "The Wumpus isn't the only danger in the dungeon. There are also pits\n";
	cout << "scattered all over the dungeon floors, so you will have to watch your\n";
	cout << "step.\n";
	cout << endl;
	cout << "Wumpus World is a text-based adventure game, so you will have to read the\n";
	cout << "text that is being displayed to the screen to help you navigate through \n";
	cout << "the dungeon." << endl;
	cout << endl;
	cout << "Wumpus World is played using the 'W', 'A', 'S', 'D' keys.\n";
	cout << "'W' is forward, 'A' is left, 'S' is backward, and 'D' is right\n";
	cout << endl;
}

void Game()
{	
	int input;
	cout << endl;
	cout << "				WUMPUS WORLD" << std::endl;
	cout << endl;
	cout << "		    	  Welcome to Wumpus World" << endl;
	cout << endl;
	cout << "		Enter (1) to play or (2) for instructions." << endl;
	cin >> input;
	if (input == 2)
	{
		DisplayInstructions();
		cout << endl;
		cout << endl;
		system("pause");
	}
	system("cls");
	Player player;
	int numOfRows;
	int numOfCols;
	std::cout << "How many rows would you like the dungeon to have?" << std::endl;
	std::cin >> numOfRows;
	std::cout << "How many columns would you like the dungeon to have?" << std::endl;
	std::cin >> numOfCols;
	system("cls");
	Dungeon dungeon(&player, numOfRows, numOfCols);
	
	//Main Game Loop
	while (dungeon.CheckPlayerPosition() == 0)
	{
		cout << endl;
		player.MovePlayer();
		system("cls");
		cout << "You move through the darkness, wandering aimlessly, unable to see.\n";
		dungeon.CheckPlayerPosition();
		dungeon.CheckForNeighbors();
	} 

	if (dungeon.CheckPlayerPosition() == 1)
	{
		system("cls");
		cout << endl;
		cout << "While wandering around in the darkness, you accidentally fall into a pit"
			<< endl;
		cout << endl;
		system("pause");
		cout << endl;
		std::cout << "You have died." << endl;
		std::cout << "Game Over" << std::endl;
	}
	else if (dungeon.CheckPlayerPosition() == 2)
	{
		system("cls");
		cout << endl;
		cout << "You ran into the Wumpus!" << endl;
		cout << endl;
		system("pause");
		cout << endl;
		cout << "You have died" << endl;
		cout << "Game Over" << endl;
	}
	else if (dungeon.CheckPlayerPosition() == 3)
	{
		system("cls");
		cout << endl;
		cout << "After searching throughout the dark dungeon, you finally find the\n";
		cout << "treasure you've been seeking.\n";
		cout << endl;
		std::cout << "You Win!" << std::endl;
	}
	system("pause");
}



int PlayAgain()
{
	int playAgain = 0;
	std::cout << "Would you like to play again?" << std::endl;
	std::cout << "(1) Yes	    	(2) No	" << std::endl;	
	std::cin >> playAgain;
	if (playAgain == 1)
	{
		system("cls");
		return 0;
	}
	else
	{
		return 1;
	}
} 