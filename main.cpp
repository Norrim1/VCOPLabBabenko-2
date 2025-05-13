#include <iostream>
#include <ca.h>
using namespace std;

int main()
{
    CA* pA1 = new CA(1.5);
    CA* pA2 = new CA(2.75);
    pA1->Fx1();
    pA1->Fx2();
    pA1->Fx3();
    pA1->Fx4();
    pA2->Fx1();
    pA2->Fx2();
    pA2->Fx3();
    pA2->Fx4();
    delete pA1;
    delete pA2;
    return 0;
}
