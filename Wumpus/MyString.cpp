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
		{
			if (mString[i] == other.mString[i])
			{
				counter++;
			}
		}
		if (counter == StringLength())
		{
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
		newString[i] = mString[i];
	}
	int newStringLength = StringLength();
	for (int j = 0; j < other.StringLength(); j++)
	{
		newString[newStringLength] = other[j];
		newStringLength++;
	}
	newString[newStringLength] = '\0';
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
	char *temp = new char[255];
	for (int i = 0; i < StringLength(); i++)
	{
		if (mString[i] >= 65 && mString[i] < 97)
		{
			temp[i] = mString[i] + 32;
		}
		else
		{
			temp[i] = mString[i];
		}
	}
	temp[StringLength()] = '\0';
	return MyString(temp);
}

MyString MyString::ToUpper()
{
	char *temp = new char[255];
	for (int i = 0; i < StringLength(); i++)
	{
		if (mString[i] >= 97 && mString[i] <= 122)
		{
			temp[i] = mString[i] - 32;
		}
		else
		{
			temp[i] = mString[i];
		}
	}
	temp[StringLength()] = '\0';
	return MyString(temp);
}

bool MyString::FindSubString(MyString substring)
{
	int counter = 0;
	int subStringIndex = 0;
	for (int i = 0; i < StringLength(); i++)
	{
		if (mString[i] == substring[subStringIndex])
		{
			for (subStringIndex; subStringIndex < substring.StringLength();
				subStringIndex++)
			{
				if (mString[i] == substring[subStringIndex])
				{
					counter++;
					i++;
				}
				else
				{
					break;
				}
			}
		}
	}
	if (counter == substring.StringLength())
	{
		return true;
	}
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
		if (mString[i] == substring[subStringIndex])
		{
			for (subStringIndex; subStringIndex < substring.StringLength();
				subStringIndex++)
			{
				if (mString[i] == substring[subStringIndex])
				{
					counter++;
					i++;
				}
				else
				{ 
					break;
				}
			}
		}
	}
	if (counter == substring.StringLength())
	{
		return true;
	}
	else
	{
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