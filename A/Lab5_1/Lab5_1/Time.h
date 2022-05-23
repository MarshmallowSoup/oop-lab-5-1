////////////////////////////////////////
// Time.h
#pragma once
#include <string>
#include <sstream>
#include <iostream>
#include "TimeException.h"
#include "Exception.h"

using namespace std;
class Time
{
private:
	int first, second;
public:
	int minutes();
	int get_first() { return first; };
	int get_second() { return second; };
	void set_first(int value) { first = value; };
	void set_second(int value) { second = value; };
	
	Time();
	Time(int x, int y);
	Time(const Time& obj);


	operator string() const;
	friend ostream& operator << (ostream& out, Time& obj);
	friend istream& operator >> (istream& in, Time& obj);


	Time operator ++();
	Time operator --();
	Time operator ++(int);
	Time operator --(int);
};