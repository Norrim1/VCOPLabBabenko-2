#pragma once
#include "first.h"

class Second : public First {
public:
    Second(int fx);
    virtual int calc() override;
};
