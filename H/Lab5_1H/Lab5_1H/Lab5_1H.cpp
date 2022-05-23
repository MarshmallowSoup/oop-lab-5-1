// Lab5_1H.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "ClosedTriangle.h"
#include "OpenTriangle.h"

int main()
{
	try {
		OpenTriangle T;
		cin >> T;
	}
	catch (TriangleException* q) {
		cout << "TriangleException: " << q->What() << endl;
	}
	catch (TriangleException& q) {
		cout << "TriangleException: " << q.What() << endl;
	}
	catch (Exception q) {
		cout << "Exception: " << q.What() << endl;
	}
	catch (invalid_argument q) {
		cout << "invalid_argument: " << q.what() << endl;
	}
}
