#pragma once

class MyString
{
private:
	const char *mString;

public:
	//Prototype: MyString()
	//Arguments: None
	//Description: Creates a new instance of the MyString class
	//Precondition: None
	//Postcondition: A new instance of the MyString class is created
	MyString();

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

	//Prototype: bool StringCompare()
	//Arguments: The string we are comparing with
	//Description: Compares to strings and returns true or false
	//Precondition: There needs to be two instances of MyString class
	//Postcondition: returns true or false
	bool operator==(MyString &other);

	//Prototype: void StringAppend()
	//Arguments: The string being applied
	//Description: Adds a string to the end of another string
	//Precondition: There needs to be two instances of MyString class
	//Postcondition: A new instance of MyString is created using both strings
	void StringAppend(MyString &other);

	//Prototype: void StringPrepend()
	//Arguments: The string being applied
	//Description: Adds a string to the front of another string
	//Precondition: There needs to be two instances of MyString class
	//Postcondition: A new instance of MyString is created using both strings
	void StringPrepend(MyString &other);

	//Prototype: char ConstantString(MyString string)
	//Arguments: The string being converted into a constant char*
	//Description: returns a string as a basic constant char*
	//Precondition: There needs to be two instances of MyString class
	//Postcondition: The string passed into the function is now a const char*
	char ConstantString(MyString string);

	//Prototype: void ToLower(MyString string)
	//Arguments: the string being converted to lowercase letters
	//Description: Takes in a string and turns all characters into lowercase letters
	//Precondition: There must be an instance of MyString class
	//Postcondition: The string now consists of all lowercase letters
	void ToLower();

	//Prototype: void ToUpper(MyString string)
	//Arguments: the string being converted to uppercase letters
	//Description: Takes in a string and turns all characters into uppercase letters
	//Precondition: There must be an instance of MyString class
	//Postcondition: The string now consists of all uppercase letters
	void ToUpper(MyString string);

	//Prototype: void FindSubString(MyString string)
	//Arguments: takes in a string
	//Description: 
	//Precondition: 
	//Postcondition: 
	void FindSubstring(MyString string);


};
//	•	The ability to find a sub - string within the string class, starting from a certain index within the string
//	•	The ability to replace a sub - string found within the string with a different sub - string
//	•	The ability to set the string to an input C - style string