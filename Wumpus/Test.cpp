#include "Test.h"
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

void RunFunctionTest()
{
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
		assert(stringThree.FindSubStringFromIndex(1, "ret") == true);
		MyString stringNine = stringThree + stringFour;
		assert(stringNine == stringSeven);
		assert(stringThree.Prepend(stringFour) == stringEight);

		int testNum = 1;
		const char* test = "StringLength";
		if (stringTwo.StringLength() == 5)
		{
			StringTestSuccess(testNum, test);
		}
		else
		{
			StringTestFail(testNum, test);
		}

		testNum = 2;
		test = "operator[]";
		if (stringTwo[0] == 'B')
		{
			StringTestSuccess(testNum, test);
		}
		else
		{
			StringTestFail(testNum, test);
		}

		testNum = 3;
		test = "StringCompare";
		if (stringTwo == stringThree)
		{
			StringTestSuccess(testNum, test);
		}
		else
		{
			StringTestFail(testNum, test);
		}

		testNum = 4;
		test = "StringAppend";
		stringNine = stringThree + stringFour;
		if (stringNine == stringSeven)
		{
			StringTestSuccess(testNum, test);
		}
		else
		{
			StringTestFail(testNum, test);
		}

		testNum = 5;
		test = "StringPrepend";
		if (stringThree.Prepend(stringFour) == stringEight)
		{
			StringTestSuccess(testNum, test);
		}
		else
		{
			StringTestFail(testNum, test);
		}

		testNum = 6;
		test = "ToLower";
		if (stringTwo.ToUpper() == stringFive)
		{
			StringTestSuccess(testNum, test);
		}
		else
		{
			StringTestFail(testNum, test);
		}

		testNum = 7;
		test = "ToUpper";
		if (stringTwo.ToLower() == stringSix)
		{
			StringTestSuccess(testNum, test);
		}
		else
		{
			StringTestFail(testNum, test);
		}

		testNum = 8;
		test = "FindSubString";
		if (stringThree.FindSubString("ret") == true)
		{
			StringTestSuccess(testNum, test);
		}
		else
		{
			StringTestFail(testNum, test);
		}

		testNum = 9;
		test = "FindSubStringFromIndex";
		if (stringThree.FindSubStringFromIndex(1, "ret") == true)
		{
			StringTestSuccess(testNum, test);
		}
		else
		{
			StringTestFail(testNum, test);
		}
		testFile.close();
	}

}