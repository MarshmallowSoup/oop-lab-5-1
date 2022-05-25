// Lab5_1C.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "OpenBitString.h"
#include "ClosedBitString.h"

using namespace std;

int main()
{
	OpenBitString b1;
	try {
		cin >> b1;
		cout << endl;
	}
	catch (BaseBitStringException* q) {
		cout << "BaseBitStringException: " << q->What() << endl;
	}
	catch (BaseBitStringException& q) {
		cout << "BaseBitStringException: " << q.What() << endl;
	}
	catch (Exception& q) {
		cout << "Exception: " << q.What() << endl;
	}

	catch (Exception* q) {
		cout << "Exception: " << q->What() << endl;
	}
	catch (invalid_argument q) {
		cout << "invalid_argument: " << q.what() << endl;
	}

	cout << b1 << endl;

}
