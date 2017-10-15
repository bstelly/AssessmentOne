#include "MyString.h"
using namespace std;

MyString::MyString()
{
	mString = new char[255];
}

MyString::MyString(const char* string)
{
	mString = string;
}

int MyString::StringLength()
{
	int counter = 0;
	while (mString[counter] != '\0')
	{
		counter++;
	}
	return counter;
}

const char MyString::operator[](const int index)
{
	char accessed = mString[index];
	return accessed;
}

bool MyString::operator==(MyString & other)
{
	int counter = 0;
	if (StringLength() == other.StringLength())
	{
		for (int i = 0; i < StringLength(); i++)
		{											//Checks to see if the two strings are the same length
			if (mString[i] == other.mString[i])
			{
				counter++;
			}
		}
		if (counter == StringLength())				//counter keeps track of how many indexes are the same
		{											//If counter equals the same number as the number of indexes, then the strings are equal
			return true;
		}
		else
		{
			return false;
		}
	}
	else
	{
		return false;
	}
}

MyString MyString::operator+(MyString &other)
{
	char *newString = new char[255];
	for (int i = 0; i < StringLength(); i++)
	{
		newString[i] = mString[i];				//copies the indexes of the string to a new string
	}
	int newStringLength = StringLength();			
	for (int j = 0; j < other.StringLength(); j++)
	{
		newString[newStringLength] = other[j];		//assigns the characters of the other string to the end of the new string
		newStringLength++;
	}
	newString[newStringLength] = '\0';				//terminates the new string
	return MyString(newString);
}

MyString MyString::Prepend(MyString & other)
{
	char *newString = new char[255];
	for (int j = 0; j < other.StringLength(); j++)
	{
		newString[j] = other[j];
	}
	int newStringLength = other.StringLength();
	for (int i = 0; i < StringLength(); i++)
	{
		newString[newStringLength] = mString[i];
		newStringLength++;
	}
	newString[newStringLength] = '\0';
	return MyString(newString);
}

const char* MyString::ConstantString()
{
	const char* string = mString;
	return string;
}

MyString MyString::ToLower()
{
	char *temp = new char[255];						//creates a new string
	for (int i = 0; i < StringLength(); i++)
	{
		if (mString[i] >= 65 && mString[i] < 97)
		{
			temp[i] = mString[i] + 32;				//turns an uppercase letter into a lowercase and assigns it to the new string
		}
		else
		{
			temp[i] = mString[i];					//if the letter is already lowercase then it gets assigned to the new string
		}
	}
	temp[StringLength()] = '\0';					//terminates the string
	return MyString(temp);
}

MyString MyString::ToUpper()
{
	char *temp = new char[255];						//creates a new string
	for (int i = 0; i < StringLength(); i++)
	{
		if (mString[i] >= 97 && mString[i] <= 122)
		{
			temp[i] = mString[i] - 32;				//turns a lowercase letter into an uppercase and assigns it to the new string
		}
		else
		{
			temp[i] = mString[i];					//if the letter is already uppercase, it gets assigned to the new string
		}
	}
	temp[StringLength()] = '\0';					//terminates the string
	return MyString(temp);
}

bool MyString::FindSubString(MyString substring)
{
	int counter = 0;
	int subStringIndex = 0;
	for (int i = 0; i < StringLength(); i++)
	{
		if (mString[i] == substring[subStringIndex])			//Checks to see if the first index of two strings are equal
		{
			for (subStringIndex; subStringIndex < substring.StringLength();	//if equal loop to check if the next next indexes are equal
				subStringIndex++)
			{
				if (mString[i] == substring[subStringIndex])
				{
					counter++;									//if next index is equal counter goes up one for each iteration
					i++;
				}
				else
				{
					break;										// if not equal break from the loop
				}
			}
		}
	}
	if (counter == substring.StringLength())
	{
		return true;
	}												//if counter is the same as the length of the substring then 
													//the FindSubString() returns true if not return false
	else
	{
		return false;
	}

}

bool MyString::FindSubStringFromIndex(int index, MyString substring)
{
	int counter = 0;
	int subStringIndex = 0;
	for (int i = index; i < StringLength(); i++)
	{
		if (mString[i] == substring[subStringIndex])        //Checks to see if the first index of two strings are equal
		{
			for (subStringIndex; subStringIndex < substring.StringLength();
				subStringIndex++)
			{
				if (mString[i] == substring[subStringIndex])    	//if equal loop to check if the next next indexes are equal
				{
					counter++;					//if next index is equal counter goes up one for each iteration
					i++;
				}
				else
				{
					break;						// if not equal break from the loop
				}
			}
		}
	}
	if (counter == substring.StringLength())
	{
		return true;
	}
	else									//if counter is the same as the length of the substring then 
	{										//the FindSubString() returns true if not return false
		return false;
	}
}

istream & operator >> (istream &in, MyString string)
{
	in >> string.mString;
	return in;
}




//MyString ReplaceSubString(MyString substring, MyString newSubString)
//{
//	char *newString = new char[255];
//}