#include <iostream>
#include "MyString.h"
#include "Player.h"
#include "Point2D.h"
#include "Dungeon.h"


int main()
{
	Player* player;
	Dungeon dungeon(10, 10);
	int i = 0;

	while (i < 10)
	{
		player->MovePlayer();
		dungeon.CheckPlayerPosition();
		i++;
	}
	system("pause");
}