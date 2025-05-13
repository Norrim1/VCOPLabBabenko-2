#include <iostream>

#include <ca.h>
#include <cb.h>
using namespace std;

void foo(IX* pIX) {
    pIX->Fx1();
    pIX->Fx2();
}

int main() {
    CA* pA = new CA(1.789);

    CB* pB = new CB();

    IX* pIX = pA;
    foo(pIX);

    pIX = pB;
    foo(pIX);

    delete pA;
    delete pB;

    return 0;
}
