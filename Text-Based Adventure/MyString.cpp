#include "MyString.h"

MyString::MyString()
{
	mString = "Default";
}

int MyString::StringLength()
{

}

const char MyString::operator[](const int index)
{
	char accessed = mString[index];
	return accessed;

}

bool MyString::operator==(MyString &other)
{
	if (mString == other.mString)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void MyString::StringAppend(MyString &other)
{

}

void MyString::StringPrepend(MyString &other)
{

}

char MyString::ConstantString(MyString string)
{

}

void MyString::ToLower()
{
	for (int i = 0; i < 97; i++)
	{
		mString[i] + 32;
	}
}

void MyString::ToUpper(MyString string)
{

}

void MyString::FindSubstring(MyString string)
{

}