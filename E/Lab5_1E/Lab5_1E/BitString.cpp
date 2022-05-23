///////////////////////////////////////////////////////////////////////////
// BitString.cpp
#include "BitString.h"
#include <sstream>
#include <string>
#include <iostream>

using namespace std;

void BitString::setA(long value)
{
	if (value > 0)
		a = value;
	else
		throw new BitStringException("A must be greater than 0");
}

void BitString::setB(long value)
{
	if (value < 0)
		b = value;
	else
		throw new Exception("B must be less than 0");
}

BitString::operator string() const
{

	stringstream sout;
	sout << "a = " << a << endl << " b = " << b << endl;
	return sout.str();
}

BitString& BitString::operator=(const BitString& obj)
{
	a = obj.a;
	b = obj.b;
	return *this;
}

BitString::BitString() {
	a = 0l;
	b = 0l;
}
BitString::BitString(long first, long second) {
	if (first != 0 && second != 0) {
		a = first;
		b = second;
	}
	else
		throw invalid_argument("A and B cant be zero");
}
BitString::BitString(char* first, char* second)
{
	a = atol(first);
	b = atol(second);
}
BitString::BitString(BitString& obj) {
	*this = obj;
}

BitString BitString::operator++()
{
	a++;
	return *this;
}

BitString BitString::operator--()
{
	a--;
	return *this;
}

BitString BitString::operator++(int)
{
	BitString obj(*this);
	b++;
	return *this;
}

BitString BitString::operator--(int)
{
	BitString obj(*this);
	b--;
	return *this;
}


BitString operator ! (BitString obj)
{
	BitString res;
	res.a = ~obj.a;
	res.b = ~obj.b;
	return res;
}

BitString operator | (BitString obj1, BitString obj2)
{
	BitString res;
	res.a = obj1.a | obj2.a;
	res.b = obj1.b | obj2.b;
	return res;
}
BitString operator & (BitString obj1, BitString obj2)
{
	BitString res;
	res.a = obj1.a & obj2.a;
	res.b = obj1.b & obj2.b;
	return res;
}

istream& operator>>(istream& in, BitString& obj)
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
ostream& operator << (ostream& out, BitString& obj)
{
	out << string(obj);
	return out;
}