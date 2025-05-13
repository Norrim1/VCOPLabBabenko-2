#pragma once
#include "ix.h"
#include <iostream>

using namespace std;

class CA : public IX
{
    public:
        double m_Fx2;
        double m_Fx3;
        double m_Fx4;

        virtual void Fx1() {cout << "CA::Fx1" << endl;};
        virtual void Fx2() {cout << m_Fx2 << endl;};
        virtual void Fx3() {cout << m_Fx3 << endl;};
        virtual void Fx4() {cout << m_Fx4 << endl;};

        CA(double d)
        {
            m_Fx2 = d * d;
            m_Fx3 = d * d * d;
            m_Fx4 = d * d * d * d;
        }
};
