#pragma once
#include<iostream>
#include<string>
using namespace std;
class BaseBitStringException
{
    string message;
public:
    BaseBitStringException(string message) : message(message) {}
    string What() { return message; }

};

