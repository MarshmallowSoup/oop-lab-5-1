///////////////////////////////////////////////////////////////////////////
// BitString.h
#pragma once 
#include "Object.h"
#include <iostream>
#include <string>
#include "BitStringException.h"
#include "Exception.h"


using namespace std;

class BitString :
	public Object
{


private:
	long a;
	long b;
public:
	long getA() const { return a; };
	long getB() const { return b; };
	void setA(long value);
	void setB(long value);

	operator string() const;
	BitString& operator = (const BitString& obj);
	BitString();
	BitString(long first, long second);
	BitString(char* first, char* second);
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