#pragma once
#include <exception>
using namespace std;

class TimeException: public exception
{
public:
	TimeException(const char* const msg) : exception(msg) {};
};

