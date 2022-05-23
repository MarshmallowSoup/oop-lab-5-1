#pragma once
#include "BaseBitString.h"
class ClosedBitString :
	private BaseBitString
{
public:
	ClosedBitString();
	ClosedBitString(long x, long y);
	ClosedBitString(char* x, char* y);
	ClosedBitString(ClosedBitString& obj);

	ClosedBitString operator ++();
	ClosedBitString operator --();
	ClosedBitString operator ++(int);
	ClosedBitString operator --(int);

	ClosedBitString& operator = (const ClosedBitString& obj);

	operator string() const;
	friend ostream& operator << (ostream& out, ClosedBitString& obj);
	friend istream& operator >> (istream& in, ClosedBitString& obj);

	friend ClosedBitString operator ! (ClosedBitString obj);
	friend ClosedBitString operator | (ClosedBitString obj1, ClosedBitString obj2);
	friend ClosedBitString operator & (ClosedBitString obj1, ClosedBitString obj2);
};

