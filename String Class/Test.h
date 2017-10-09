#pragma once
#include "MyString.h"
#include <fstream>
using namespace std;

fstream testFile;
void StringTestSuccess(int testNum, const char* test)
{
	if (testFile.is_open())
	{
		testFile << "Test	" << testNum << "	" << test << "	Successful" << endl;
	}
	else
	{
		testFile.open("Test.txt", ios_base::out);
		testFile << "Test	" << testNum << "	" << test << "	Successful" << endl;
	}
}

void StringTestFail(int testNum, const char* test)
{
	if (testFile.is_open())
	{
		testFile << "Test	" << testNum << "	" << test << "	Failed" << endl;
	}
	else
	{
		testFile.open("Test.txt", ios_base::out);
		testFile << "Test	" << testNum << "	" << test << "	Failed" << endl;
	}
}