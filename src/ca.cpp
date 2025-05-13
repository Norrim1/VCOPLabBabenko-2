#include "ca.h"

CA::CA(double d)
{
    m_Fx2 = d * d;
    m_Fx3 = d * d * d;
    m_Fx4 = d * d * d * d;
}

void CA::Fx1()
{
    cout << "CA::Fx1" << endl;
}

void CA::Fx2()
{
    cout << m_Fx2 << endl;
}

void CA::Fx3()
{
    cout << m_Fx3 << endl;
}

void CA::Fx4()
{
    cout << m_Fx4 << endl;
}
