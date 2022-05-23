#include "OpenBitString.h"
OpenBitString OpenBitString::operator++()
{
	a++;
	return *this;
}

OpenBitString OpenBitString::operator--()
{
	a--;
	return *this;
}

OpenBitString OpenBitString::operator++(int)
{
	OpenBitString obj(*this);
	b++;
	return *this;
}

OpenBitString OpenBitString::operator--(int)
{
	OpenBitString obj(*this);
	b--;
	return *this;
}

OpenBitString& OpenBitString::operator=(const OpenBitString& obj)
{
	a = obj.a;
	b = obj.b;
	return *this;
}


OpenBitString operator ! (OpenBitString obj)
{
	OpenBitString res;
	res.a = ~obj.a;
	res.b = ~obj.b;
	return res;
}

OpenBitString operator | (OpenBitString obj1, OpenBitString obj2)
{
	OpenBitString res;
	res.a = obj1.a | obj2.a;
	res.b = obj1.b | obj2.b;
	return res;
}
OpenBitString operator & (OpenBitString obj1, OpenBitString obj2)
{
	OpenBitString res;
	res.a = obj1.a & obj2.a;
	res.b = obj1.b & obj2.b;
	return res;
}