#pragma once
#include "Point2D.h"

class Wumpus
{
private:

	Point2D mPosition;

public:
	//Prototype: Wumpus()
	//Arguments: None
	//Description: creates a new instance of the wumpus class
	//Precondition: None
	//Postcondition: A new instance of the wumpus class is created
	//Protection Level: Public
	Wumpus();

	//Prototype: void SetPosition(Point2D* position)
	//Arguments: A pointer of type Point2D
	//Description: Sets the position of a wumpus to the position of a room
	//Precondition: there must be an instance of Dungeon class created
	//Postcondition: A wumpus now equals the position of a room in dungeon class
	//Protection Level: Public
	void SetPosition(float x, float y);

	//Prototype: GetPosition()
	//Arguments: None
	//Description: Returns the position of a wumpus
	//Precondition: There must be an instance of wumpus class created
	//Postcondition: GetPosition() now equals a Point2D 
	//Protection Level: Public
	Point2D GetPosition();
};