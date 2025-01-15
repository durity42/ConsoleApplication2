#pragma once
#include "Entity.h"
#include "Alive.h"
#include "AMovable.h"
#include "IAttacker.h"
#include <iostream>

class Player : public Entity, public Alive, public AMovable, public IAttacker
{
public:
    Player(float x, float y, float maxLife, float currentLife, const Vector2& direction, float speed);
    virtual void takeDamage(float damage) override;
    virtual void move() override;
    virtual void attack(Alive* target) override;
};
