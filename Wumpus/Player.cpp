#include "Player.h"
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
	cout << endl;
	cout << endl;
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
Point2D Player::GetPosition()
{
	return mPosition;
}

void Player::SetPosition(Point2D position)
{
	mPosition = position;
}

void Player::SetX_WhenBelowZero()
{
	Point2D currentPosition = mPosition;
	mPosition = currentPosition + Point2D(1, 0);
}

void Player::SetY_WhenBelowZero()
{
	Point2D currentPosition = mPosition;
	mPosition = currentPosition + Point2D(0, 1);
}

void Player::SetX_WhenAboveMax()
{
	Point2D currentPosition = mPosition;
	mPosition = currentPosition + Point2D(-1, 0);
}

void Player::SetY_WhenAboveMax()
{
	Point2D currentPosition = mPosition;
	mPosition = currentPosition + Point2D(0, -1);
}

//void Player::DirectionOutput()
//{
//	if (MovePlayer() == 1)
//	{
//		cout << "You move forward through the darkness, wandering aimlessly, unable to";
//		cout << " see.\n";
//	}
//	else if (MovePlayer() == 2)
//	{
//		cout << "You move to the right\n";
//	}
//	else if (MovePlayer() == 3)
//	{
//		cout << "You move to the left\n";
//	}
//	else if (MovePlayer() == 4)
//	{
//		cout << "You turn around and go back\n";
//	}
//}