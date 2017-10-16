#pragma once
#include "Point2D.h"

class Treasure
{
private:
	Point2D mPosition;
public:
	//Prototype: Treasure()
	//Arguments: None
	//Description: Creates a new instance of the treasure class
	//Precondition: none
	//Postcondition: A new instance of the treasure class is created
	//Protection Level: Public
	Treasure();

	//Prototype: void SetPosition(Point2D* position)
	//Arguments: A pointer of type Point2D
	//Description: Sets the position of treasure to the position of a room
	//Precondition: there must be an instance of Dungeon class created
	//Postcondition: A treasure now equals the position of a room in dungeon class
	//Protection Level: Public
	void SetPosition(float x, float y);

	//Prototype: GetPosition()
	//Arguments: None
	//Description: Returns the position of treasure
	//Precondition: There must be an instance of treasure class created
	//Postcondition: GetPosition() now equals a Point2D 
	//Protection Level: Public
	Point2D GetPosition();
};