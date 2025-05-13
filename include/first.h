#pragma once
#include <iostream>
#include <string>

class First {
public:
    int x;
    First(int fx);
    virtual int calc();
    void print(std::string text);
};
