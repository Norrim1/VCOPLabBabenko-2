#include "ca.h"
#include <iostream>

using namespace std;

int main() {
    cout << "Client: create an example of component" << endl;
    CA* pA = new CA();

    IX* pIX = pA;
    cout << "Client: using interface IX" << endl;
    pIX->Fx1();
    pIX->Fx2();
    IY* pIY = pA;
    cout << "Client: using interface IY" << endl;
    pIY->Fy1();
    pIY->Fy2();

    cout << "Client: deleting component" << endl;
    delete pA;

    return 0;
}
