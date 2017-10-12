#pragma once
#include "Point2D.h"
#include "Dungeon.h"

class Hazard
{
private:
	
	Point2D* mPosition;

public:
	//Prototype: Hazard()
	//Arguments: None
	//Description: creates a new instance of the hazard class
	//Precondition: None
	//Postcondition: A new instance of the hazard class is created
	//Protection Level: Public
	Hazard();

	//Prototype: void SetPosition(Point2D* position)
	//Arguments: A pointer of type Point2D
	//Description: Sets the position of a hazard to the position of a room
	//Precondition: there must be an instance of Dungeon class created
	//Postcondition: A hazard now equals the position of a room in dungeon class
	//Protection Level: Public
	void SetPosition(Point2D* position);

	//Prototype: GetPosition()
	//Arguments: None
	//Description: Returns the position of a hazard
	//Precondition: There must be an instance of hazard class created
	//Postcondition: GetPosition() now equals a Point2D 
	//Protection Level: Public
	Point2D GetPosition();
};