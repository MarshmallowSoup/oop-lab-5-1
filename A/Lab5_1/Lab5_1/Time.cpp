////////////////////////////////////////
// Time.cpp
#include "Time.h"


int Time::minutes()
{
    int hoursToMinutes = first * 60;
    return hoursToMinutes + second;
}



Time::Time()
{
    first = 0;
    second = 0;
}

Time::Time(int x, int y)
{
        first = x;
        second = y;      
}

Time::Time(const Time& obj)
{
    *this = obj;
}

Time::operator string() const
{
    stringstream sout;
    sout << "Hours = " << first << endl << " Minutes = " << second << endl;
    return sout.str();
}


istream& operator>>(istream& in, Time& obj)
{
    int x, y;
    cout << " Hours = "; in >> x;
    cout << " Minutes = "; in >> y;
    cout << endl;
    if(x < 0)
        throw TimeException("Hours must be 0 or more (less than 24)");
    if(y < 0)
        throw Exception("Minuntes must be 0 or more (less than 60)");
    if(x > 24 || y > 60)
        throw invalid_argument("Hours must be less than 24 and minuntes must be less than 60");
    obj = Time(x, y);
        
    return in;
}
ostream& operator << (ostream& out, Time& obj)
{
    out << string(obj);
    return out;
}


Time Time::operator++()
{
    first++;
    return *this;
}

Time Time::operator--()
{
    first--;
    return *this;
}

Time Time::operator++(int)
{
    Time obj(*this);
    second++;
    return *this;
}

Time Time::operator--(int)
{
    Time obj(*this);
    second--;
    return *this;
}