#include <iostream>
#include "Player.h"
#include "Point2D.h"
#include "Dungeon.h"
#include "Game.h"


int main()
{
	Game();
	while (PlayAgain() == 0)
	{
		Game();
		system("cls");
		PlayAgain();
	}
	
}