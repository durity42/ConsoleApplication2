#pragma once
#include "Alive.h"

class IAttacker
{
public:
    virtual void attack(Alive* target) = 0;
};
