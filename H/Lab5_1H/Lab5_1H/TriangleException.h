#pragma once
#include<iostream>
#include<string>
using namespace std;
class TriangleException
{
    string message;
public:
    TriangleException(string message) : message(message) {}
    string What() { return message; }

};
