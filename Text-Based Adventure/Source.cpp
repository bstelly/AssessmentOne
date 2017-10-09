#include "MyString.h"
#include <iostream>

int main()
{
	MyString test;
	MyString testTwo("Brett");
	MyString testThree("Brett");
	MyString testFour("Stelly");
	int length = test.StringLength();
	int lengthTwo = testTwo.StringLength();
	int lengthThree = testFour.StringLength();

	if (testTwo == testThree)
	{
		std::cout << "They are equal" << std::endl;
	}
	else													//Should be equal
	{
		std::cout << "They are not equal" << std::endl;
	}
	if (testThree == testFour)
	{
		std::cout << "They are equal" << std::endl;
	}
	else													//Should not be equal
	{
		std::cout << "They are not equal" << std::endl;
	}
	
	MyString lowercaseTest = testTwo.ToLower();
	MyString uppercaseTest = testTwo.ToUpper();
	MyString appendTest = testThree + testFour;
	MyString prependTest = testThree.Prepend(testFour);

	if (testThree.FindSubString("ret"))
	{
		std::cout << "true" << std::endl;
	}
	else
	{
		std::cout << "false" << std::endl;
	}

	if (testThree.FindSubStringFromIndex(1, "ret"))
	{
		std::cout << "true" << std::endl;
	}
	else
	{
		std::cout << "false" << std::endl;
	}






	system("pause");
}
