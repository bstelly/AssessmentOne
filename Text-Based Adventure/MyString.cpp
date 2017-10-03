#include "MyString.h"

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

//const char MyString::operator[](const int index)
//{
//	char accessed = mString[index];
//	return accessed;
//}

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

//void MyString::StringAppend(MyString & other)
//{
//
//}
//
//void MyString::StringPrepend(MyString & other)
//{
//
//}
//
//char MyString::ConstantString(MyString string)
//{
//
//}

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
		return MyString(temp);
	}
	temp[StringLength()] = '\0';
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
		return MyString(temp);
	}
	temp[StringLength()] = '\0';
}

//void MyString::FindSubstring(MyString string)
//{
//
//}