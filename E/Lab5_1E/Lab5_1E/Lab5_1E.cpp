
#include <iostream>
#include "BitString.h"

using namespace std;

int main()
{
	BitString b1;
	try {
		cin >> b1;
		cout << endl;
	}
	catch (BitStringException* q) {
		cout << "BaseBitStringException: " << q->What() << endl;
	}
	catch (BitStringException& q) {
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
	cout << "Amount of BitString objects: " << b1.get_count() << endl;

}