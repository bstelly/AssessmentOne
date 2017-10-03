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
	int lengthThree = testThree.StringLength();

	if (testTwo == testThree)
	{
		std::cout << "They are equal" << std::endl;
	}
	else
	{
		std::cout << "They are not equal" << std::endl;
	}
	if (testThree == testFour)
	{
		std::cout << "They are equal" << std::endl;
	}
	else
	{
		std::cout << "They are not equal" << std::endl;
	}
	
	testTwo.ToLower();
	system("pause");
}
