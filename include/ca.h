#pragma once
#include "ix.h"
#include "iy.h"
#include <iostream>

class CA : public IX, public IY {
public:
    void Fx1() override;
    void Fx2() override;
    void Fy1() override;
    void Fy2() override;
};
