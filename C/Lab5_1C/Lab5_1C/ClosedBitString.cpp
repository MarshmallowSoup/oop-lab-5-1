#include "ClosedBitString.h"

ClosedBitString::ClosedBitString() {
	a = 0l;
	b = 0l;
}
ClosedBitString::ClosedBitString(long x, long y) {
	if (x > 0) {
		a = x;
		b = y;
	}
	else
		throw new BaseBitStringException("A must be greater yhan 0");

}
ClosedBitString::ClosedBitString(char* x, char* y)
{
	long xl, yl;
	xl = atol(x);
	yl = atol(y);
	if (xl != 0 && yl != 0) {
		a = xl;
		b = yl;
	}
	else
		throw invalid_argument("A and B cant be zero");
}
ClosedBitString::ClosedBitString(ClosedBitString& obj) {
	*this = obj;
}

ClosedBitString ClosedBitString::operator++()
{
	a++;
	return *this;
}

ClosedBitString ClosedBitString::operator--()
{
	a--;
	return *this;
}

ClosedBitString ClosedBitString::operator++(int)
{
	ClosedBitString obj(*this);
	b++;
	return *this;
}

ClosedBitString ClosedBitString::operator--(int)
{
	ClosedBitString obj(*this);
	b--;
	return *this;
}

ClosedBitString& ClosedBitString::operator=(const ClosedBitString& obj)
{
	setA(obj.getA());
	setB(obj.getB());
	return *this;
}

ClosedBitString::operator string() const
{

	stringstream sout;
	sout << "a = " << a << endl << " b = " << b << endl;
	return sout.str();
}


ostream& operator<<(ostream& out, ClosedBitString& obj)
{
	out << string(obj);
	return out;
}

istream& operator>>(istream& in, ClosedBitString& obj)
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

ClosedBitString operator ! (ClosedBitString obj)
{
	ClosedBitString res;
	res.a = ~obj.a;
	res.b = ~obj.b;
	return res;
}

ClosedBitString operator | (ClosedBitString obj1, ClosedBitString obj2)
{
	ClosedBitString res;
	res.a = obj1.a | obj2.a;
	res.b = obj1.b | obj2.b;
	return res;
}
ClosedBitString operator & (ClosedBitString obj1, ClosedBitString obj2)
{
	ClosedBitString res;
	res.a = obj1.a & obj2.a;
	res.b = obj1.b & obj2.b;
	return res;
}