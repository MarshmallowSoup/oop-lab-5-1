#include "BaseBitString.h"

long to_Long(char* value)
{
	long result = atol(value);
	return result;
}

void BaseBitString::setA(long value)
{
	 if (value > 0) 
		 a = value;
	 else
		throw new BaseBitStringException("A must be greater than 0");
}

void BaseBitString::setB(long value)
{
	if (value < 0)
		b = value;
	else
		throw new Exception("B must be less than 0");
}

BaseBitString::operator string() const
{

	stringstream sout;
	sout << "a = " << a << endl << " b = " << b << endl;
	return sout.str();
}

BaseBitString& BaseBitString::operator=(const BaseBitString& obj)
{
	a = obj.a;
	b = obj.b;
	return *this;
}

BaseBitString::BaseBitString() {
	a = 0l;
	b = 0l;
}
BaseBitString::BaseBitString(long first, long second) {
	if (first > 0) {
		a = first;
		b = second;
	}
	else
		throw new BaseBitStringException("A must be greater than 0");

}
BaseBitString::BaseBitString(char* first, char* second)
{
	long xl, yl;
	xl = to_Long(first);
	yl = to_Long(second);
	if (xl != 0 && yl != 0) {
		a = xl;
		b = yl;
	}
	else
		throw invalid_argument("A and B cant be zero");
}
BaseBitString::BaseBitString(BaseBitString& obj) {
	*this = obj;
}

istream& operator>>(istream& in, BaseBitString& obj)
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
ostream& operator << (ostream& out, BaseBitString& obj)
{
	out << string(obj);
	return out;
}
