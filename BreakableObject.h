#pragma once
#include "Entity.h"
#include "Alive.h"
#include <iostream>

class BreakableObject : public Entity, public Alive
{
public:
    BreakableObject(float x, float y, float maxLife, float currentLife);
    virtual void takeDamage(float damage) override;
};
