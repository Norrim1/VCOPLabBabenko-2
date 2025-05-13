#pragma once
#include "second.h"

class Third : public Second {
public:
    Third(int fx);
    virtual int calc() override;
};
