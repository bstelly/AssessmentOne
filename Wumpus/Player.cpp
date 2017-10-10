#include "Player.h"
#include "Commands.h"
#include <iostream>
#include <string>

Player::Player()
{
	mPosition = Point2D();
}

void Player::MovePlayer()
{
	char direction;
	std::cout << "Where would you like to go?" << endl;
	std::cin >> direction;
	if (direction == 'W' || direction == 'w')
	{
		Point2D currentPosition = mPosition;
		mPosition = currentPosition + Point2D(0, 1);
	}
	else if (direction == 'D' || direction == 'd')
	{
		Point2D currentPosition = mPosition;
		mPosition = currentPosition + Point2D(1, 0);
	}
	else if (direction == 'A' || direction == 'a')
	{
		Point2D currentPosition = mPosition;
		mPosition = currentPosition + Point2D(-1, 0);
	}
	else if (direction == 'S' || direction == 's')
	{
		Point2D currentPosition = mPosition;
		mPosition = currentPosition + Point2D(0, -1);
	}
}