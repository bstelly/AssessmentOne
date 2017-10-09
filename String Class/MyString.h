#pragma once
#include <string>
#include <iostream>
using namespace std;

class MyString
{
private:
	const char* mString;

public:
	//Prototype: MyString()
	//Arguments: None
	//Description: Creates a new instance of the MyString class
	//Precondition: None
	//Postcondition: A new instance of the MyString class is created
	MyString();

	//Prototype: MyString()
	//Arguments: None
	//Description: Creates a new instance of the MyString class
	//Precondition: None
	//Postcondition: A new instance of the MyString class is created
	MyString(const char* string);

	//Prototype: int StringLength()
	//Arguments: None
	//Description: querys the string’s length and returns an interger
	//Precondition: None
	//Postcondition: StringLength is equal to the length of the string
	int StringLength();

	//Prototype: const char operator[](const int index)
	//Arguments: const int
	//Description: Allows access to a certain character in an index
	//Precondition: There need to be an instance of MyString class
	//Postcondition: The character in the index can now be accessed
	const char operator[](const int index);

	//Prototype: bool operator==(MyString &other)
	//Arguments: The string we are comparing with
	//Description: Compares to strings and returns true or false
	//Precondition: There needs to be two instances of MyString class
	//Postcondition: returns true or false
	bool operator==(MyString &other);

	//Prototype: MyString operator+(MyString &other);
	//Arguments: The string being applied
	//Description: Adds a string to the end of another string
	//Precondition: There needs to be two instances of MyString class
	//Postcondition: A new instance of MyString is created using both strings
	MyString operator+(MyString &other);

	//Prototype: MyString Prepend(MyString &other);
	//Arguments: The string being applied
	//Description: Adds a string to the front of another string
	//Precondition: There needs to be two instances of MyString class
	//Postcondition: A new instance of MyString is created using both strings
	MyString Prepend(MyString &other);

	//Prototype: const char* ConstantString();
	//Arguments: The string being converted into a constant char*
	//Description: returns a string as a basic constant char*
	//Precondition: There needs to be two instances of MyString class
	//Postcondition: The string passed into the function is now a const char*
	const char* ConstantString();

	//Prototype: void ToLower
	//Arguments: the string being converted to lowercase letters
	//Description: Takes in a string and turns all characters into lowercase letters
	//Precondition: There must be an instance of MyString class
	//Postcondition: The string now consists of all lowercase letters
	MyString ToLower();

	//Prototype: void ToUpper
	//Arguments: the string being converted to uppercase letters
	//Description: Takes in a string and turns all characters into uppercase letters
	//Precondition: There must be an instance of MyString class
	//Postcondition: The string now consists of all uppercase letters
	MyString ToUpper();

	//Prototype: bool FindSubString(MyString substring);
	//Arguments: the substring you want to find
	//Description: Finds a sub-string within the string class
	//Precondition: there must be an instance of MyString class
	//Postcondition: The function equals true or false depending on the result
	bool FindSubString(MyString substring);

	//Prototype: bool FindSubStringFromIndex(int index, MyString substring);
	//Arguments: the index to begin with and the substring you want to find
	//Description: Finds a sub-string within the string class
	//Precondition: there must be an instance of MyString class
	//Postcondition: The function equals true or false depending on the result
	bool FindSubStringFromIndex(int index, MyString substring);

	//Prototype: 	friend istream & operator >> (istream &in, MyString string);
	//Arguments: 
	//Description: 
	//Precondition: 
	//Postcondition: 
	friend istream & operator >> (istream &in, MyString string);
	
	//Prototype: MyString ReplaceSubString(MyString substring, MyString newSubString);
	//Arguments: 
	//Description: 
	//Precondition: 
	//Postcondition: 
	MyString ReplaceSubString(MyString substring, MyString newSubString);
};



