
///////////////////////////////////////////////////////////////////////////
// Pair.cpp
#include "Pair.h"
#include <sstream>
#include <string>
#include <iostream>

using namespace std;

void Pair::setA(long value)
{

	if (value > 0)
		a = value;
	else
		throw new BitStringException("A must be greater than 0");
}

void Pair::setB(long value)
{
	if (value < 0)
		b = value;
	else
		throw new Exception("B must be less than 0");
}

Pair::operator string() const
{

	stringstream sout;
	sout << "a = " << a << endl << " b = " << b << endl;
	return sout.str();
}

Pair& Pair::operator=(const Pair& obj)
{
	a = obj.a;
	b = obj.b;
	return *this;
}

Pair::Pair() {
	a = 0l;
	b = 0l;
}
Pair::Pair(long first, long second) {
	if (first != 0 && second != 0) {
		a = first;
		b = second;
	}
	else
		throw invalid_argument("A and B cant be zero");
}
Pair::Pair(char* x, char* y)
{
	a = atol(x);
	b = atol(y);
}
Pair::Pair(Pair& obj) {
	*this = obj;
}


istream& operator>>(istream& in, Pair& obj)
{
	long x, y;
	cout << " a = "; in >> x;
	cout << " b = "; in >> y;
	if (x == 0 && y == 0)
		throw invalid_argument("A and B cant be zero");
	obj.setA(x);
	obj.setB(y);
	cout << endl;
	return in;
}
bool operator>(Pair& obj1, Pair& obj2)
{
	return obj1.a > obj2.a && obj1.b > obj2.b;
}

bool operator<(Pair& obj1, Pair& obj2)
{
	return !(obj1 > obj2);
}

bool operator==(Pair& obj1, Pair& obj2)
{
	return obj1.a == obj2.a && obj1.b == obj2.b;
}

ostream& operator << (ostream& out, Pair& obj)
{
	out << string(obj);
	return out;
}
