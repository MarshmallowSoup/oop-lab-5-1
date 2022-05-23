#pragma once
#include <sstream>
#include <string>
#include <iostream>
#include "Exception.h"
#include "BaseBitStringException.h"

using namespace std;

class BaseBitString
{

protected:
	long a;
	long b;
public:
	long getA() const { return a; };
	long getB() const { return b; };
	void setA(long value);
	void setB(long value);

	operator string() const;
	BaseBitString& operator = (const BaseBitString& obj);
	BaseBitString();
	BaseBitString(long first, long second);
	BaseBitString(char* first, char* second);
	BaseBitString(BaseBitString& obj);

	friend long to_Long(char* value);

	friend ostream& operator << (ostream& out, BaseBitString& obj);
	friend istream& operator >> (istream& in, BaseBitString& obj);

};

