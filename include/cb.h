#pragma once
#include "ix.h"
#include <iostream>

using namespace std;

class CB : public IX
{
    public:
        virtual void Fx1() { cout << "CB::Fx1" << endl; }
        virtual void Fx2() { cout << "CB::Fx2" << endl; }
        virtual void Fx3() { cout << "CB::Fx3" << endl; }
        virtual void Fx4() { cout << "CB::Fx4" << endl; }
};
