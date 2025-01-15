#pragma once
#include "Entity.h"
#include "Alive.h"
#include "AMovable.h"
#include <iostream>

class Mob : public Entity, public Alive, public AMovable
{
public:
    Mob(float x, float y, float maxLife, float currentLife, const Vector2& direction, float speed);
    virtual void takeDamage(float damage) override;
    virtual void move() override;
};
