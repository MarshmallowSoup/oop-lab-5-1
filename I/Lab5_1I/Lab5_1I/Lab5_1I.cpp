#include <iostream>
#include "Triangle.h"

int main()
{
	try {
		Triangle T;
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
