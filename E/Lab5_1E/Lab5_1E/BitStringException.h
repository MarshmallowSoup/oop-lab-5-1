#pragma once
#include<iostream>
#include<string>
using namespace std;
class BitStringException
{
    string message;
public:
    BitStringException(string message) : message(message) {}
    string What() { return message; }

};