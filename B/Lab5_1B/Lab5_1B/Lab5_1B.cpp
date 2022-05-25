// Lab5_1B.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "BitString.h"
using namespace std;

int main()
{

	BitString b1, b2;
	try {
		cout << "first object" << endl;
		cin >> b1;

	}
	catch (BitStringException& e)
	{
		cout << "NumberException " << e.What() << endl;
	}
	catch (BitStringException* e)
	{
		cout << "NumberException " << e->What() << endl;
	}
	catch (Exception* e)
	{
		cout << "exception& " << e->what() << endl;
	}
	catch (Exception& e)
	{
		cout << "exception& " << e.what() << endl;
	}
	catch (invalid_argument b)
	{
		cerr << "invalid_argument " << b.what() << endl;
	}
}
