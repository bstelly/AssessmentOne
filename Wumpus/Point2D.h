#pragma once
#include <iostream>
class Point2D
{
private:
	float mX;
	float mY;

public:
	//Prototype: Point2D()
	//Arguments: None
	//Description: Creates a new instance of the Point2D class
	//Precondition: None
	//Postcondition: a new instance of the Point2D class is created
	//Protection Level: Public
	Point2D();

	//Prototype: Point2D(float x, float y)
	//Arguments: takes in two floats
	//Description: Creates a new instance of Point2D class based on arguments passed in
	//Precondition: None
	//Postcondition: a new instance of the Point2D class is created
	//Protection Level: Public
	Point2D(float x, float y);

	//Prototype: Point2D operator+ (const Point2D & other)
	//Arguments: Takes in a constant Point2D variable
	//Description: Allows two Point2D's to be added
	//Precondition: Two instances of the Point2D class must be created
	//Postcondition: The const Point2D is applied
	//Protection Level: Public
	Point2D operator + (const Point2D & other);

	//Prototype: Point2D operator- (const Point2D & other)
	//Arguments: Takes in a constant Point2D variable
	//Description: Allows two Point2D's to be subtracted
	//Precondition: Two instances of the Point2D class must be created
	//Postcondition: The const Point2D is applied
	//Protection Level: Public
	Point2D operator - (const Point2D & other);

	//Prototype: bool operator == (const Point2D & other)
	//Arguments: takes in a constant Point2D
	//Description: Allows two Point2D's to be compared
	//Precondition: Two instances of the Point2D class must be created
	//Postcondition: the const Point2D is compared and returns a true or false
	//Protection Level: Public
	bool operator == (const Point2D & other);

	//Prototype: 	bool operator != (const Point2D & other);
	//Arguments: Takes in a constant Point2D variable
	//Description: Allows two Point2D's to be compared
	//Precondition: Two instances of the Point2D class must be created
	//Postcondition: The const Point2D is applied
	//Protection Level: Public
	bool operator != (const Point2D & other);

	//Prototype: float GetX()
	//Arguments: None
	//Description: returns mX
	//Precondition: There must be an instance of the Point2D class created
	//Postcondition: The value of mX is returned
	//Protection Level: Public
	float GetX();

	//Prototype: float GetY()
	//Arguments: None
	//Description: returns mY
	//Precondition: There must be an instance of the Point2D class created
	//Postcondition: The value of mY is returned
	//Protection Level: public
	float GetY();


};