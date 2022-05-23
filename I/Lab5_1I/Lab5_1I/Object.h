#pragma once
class Object
{
protected:
    static unsigned int count;
public:
    Object();
    ~Object();
    unsigned int get_count() { return count; };
};

