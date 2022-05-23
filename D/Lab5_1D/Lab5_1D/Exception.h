#pragma once
#include<iostream>
#include<string>
#include<exception>
using namespace std;
class Exception: public exception
{
    string message;
public:
    Exception(string message) : message(message) {}
    string What() { return message; }
};