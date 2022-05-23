///////////////////////////////////////////////////////////////////////////
// BitString.h
#include <iostream>
#include <string>
#include "BitStringException.h"
#include "Exception.h"
#pragma once 

using namespace std;

class BitString
{
private:
	long a;
	long b;
public:
	long getA() const { return a; };
	long getB() const { return b; };
	void setA(long value) { a = value; }
	void setB(long value) { b = value; }

	operator string() const;
	BitString& operator = (const BitString& obj);
	BitString();
	BitString(long x, long y);
	BitString(BitString& obj);

	BitString operator ++();
	BitString operator --();
	BitString operator ++(int);
	BitString operator --(int);

	friend BitString operator ! (BitString obj);
	friend BitString operator | (BitString obj1, BitString obj2);
	friend BitString operator & (BitString obj1, BitString obj2);
	friend ostream& operator << (ostream& out, BitString& obj);
	friend istream& operator >> (istream& in, BitString& obj);
};