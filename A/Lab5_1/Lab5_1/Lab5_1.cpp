////////////////////////////////
// Lab5_1.cpp
//

#include <iostream>
#include "Time.h"

using namespace std;

Time createTime(int x, int y) {
	if ((x < 0 || x >= 24) && (y < 0 || y > 60)) {
		throw "Error";
	}
	Time t = Time(x, y);
	return t;
}
void _unexpected_to_bad()
{
	cerr << "bad_exception" << endl;
	throw;
}

int main()
{
	set_unexpected(_unexpected_to_bad);
	set_terminate(_unexpected_to_bad);

	Time n;
	try {
		cin >> n;
		cout << n << endl;
		cout << "Total minutes: " << n.minutes() << endl;;
	}
	catch (TimeException *e)
	{
		cout << "NumberException " << e->what() << endl;
	}
	catch (TimeException &e)
	{
		cout << "NumberException " << e.what() << endl;
	}
	catch (Exception* e)
	{
		cout << "exception& " << e->What() << endl;
	}
	catch (Exception& e)
	{
		cout << "exception& " << e.What() << endl;
	}
	catch (invalid_argument b)
	{
		cerr << "invalid_argument " << b.what() << endl;
	}

	return 0;
}