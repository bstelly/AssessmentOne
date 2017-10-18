#include "MyString.h"
#include "Test.h"
#include <iostream>
#include <fstream>
#include <assert.h>
using namespace std;
int main()
{
	MyString string;
	MyString stringTwo("Brett");
	MyString stringThree("Brett");
	MyString stringFour("Stelly");
	MyString stringFive("BRETT");
	MyString stringSix("brett");
	MyString stringSeven("BrettStelly");
	MyString stringEight("StellyBrett");

	assert(stringTwo.StringLength() == 5);
	assert(stringTwo[0] == 'B');
	assert(stringTwo == stringThree);
	assert(stringTwo.ToUpper() == stringFive);
	assert(stringTwo.ToLower() == stringSix);
	assert(stringThree.FindSubString("ret") == true);
	assert(stringThree.FindSubStringFromIndex(1, "ret") == true);		//Asserts will break the program if one of the conditions
	MyString stringNine = stringThree + stringFour;						//equals false
	assert(stringNine == stringSeven);
	assert(stringThree.Prepend(stringFour) == stringEight);
	


//String Unit Test - creates a text file printing the test name and the results

	int testNum = 1;
	const char* test = "StringLength";
	std::cout << "String Length should be 5.\n";
	if (stringTwo.StringLength() == 5)
	{
		StringTestSuccess(testNum, test);
	}
	else
	{
		StringTestFail(testNum, test);
	}
	std::cout << std::endl;
	
	testNum = 2;
	std::cout << "Index 0 should be 'B'.\n" << std::endl;
	test = "operator[]";
	if(stringTwo[0] == 'B')
	{
		StringTestSuccess(testNum, test);
	}
	else
	{
		StringTestFail(testNum, test);
	}
	std::cout << std::endl;

	testNum = 3;
	std::cout << "Comparing stringTwo and stringThree.\n" << std::endl;
	test = "StringCompare";
	if(stringTwo == stringThree)
	{
		StringTestSuccess(testNum, test);
	}
	else
	{
		StringTestFail(testNum, test);
	}
	std::cout << std::endl;

	testNum = 4;
	std::cout << "Appending stringThree and StringFour.\n" << std::endl;
	test = "StringAppend";
	stringNine = stringThree + stringFour;
	if(stringNine == stringSeven)
	{
		StringTestSuccess(testNum, test);
	}
	else
	{
		StringTestFail(testNum, test);
	}
	std::cout << std::endl;

	testNum = 5;
	std::cout << "Prepending StringFour to StringThree.\n" << std::endl;
	test = "StringPrepend";
	if(stringThree.Prepend(stringFour) == stringEight)
	{
		StringTestSuccess(testNum, test);
	}
	else
	{
		StringTestFail(testNum, test);
	}
	std::cout << std::endl;

	testNum = 6;
	std::cout << "Making stringTwo uppercase.\n" << std::endl;
	test = "ToLower";
	if(stringTwo.ToUpper() == stringFive)
	{
		StringTestSuccess(testNum, test);
	}
	else
	{
		StringTestFail(testNum, test);
	}
	std::cout << std::endl;

	testNum = 7;
	std::cout << "Making stringTwo lowercase.\n" << std::endl;
	test = "ToUpper";
	if(stringTwo.ToLower() == stringSix)
	{
		StringTestSuccess(testNum, test);
	}
	else
	{
		StringTestFail(testNum, test);
	}
	std::cout << std::endl;

	testNum = 8;
	std::cout << "Finding substring 'ret' in stringThree.\n" << std::endl;
	test = "FindSubString";
	if(stringThree.FindSubString("ret") == true)
	{
		StringTestSuccess(testNum, test);
	}
	else
	{
		StringTestFail(testNum, test);
	}
	std::cout << std::endl;

	testNum = 9;
	std::cout << "Finding substring 'ret' from index '1' in stringThree\n" << std::endl;
	test = "FindSubStringFromIndex";
	if(stringThree.FindSubStringFromIndex(1, "ret") == true)
	{
		StringTestSuccess(testNum, test);
	}
	else
	{
		StringTestFail(testNum, test);
	}
	std::cout << std::endl;
	testFile.close();

	


	system("pause");
}
