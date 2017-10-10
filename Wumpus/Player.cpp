#include "Player.h"
#include "Commands.h"
#include <iostream>
#include <string>

Player::Player()
{
	mPosition = Point2D();
}

void Player::Commands()
{
	MyString commands[1];
	MyString goForward("Go forward");
	commands[0] = goForward;
}

void Player::MovePlayer()
{
	MyString input;
	std::cout << "Where do you want to go?" << endl;
	std::cin >> input;
	input;
}