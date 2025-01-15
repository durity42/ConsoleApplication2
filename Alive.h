#pragma once

class Alive
{
protected:
    float maxLife;
    float currentLife;

public:
    Alive(float maxLife, float currentLife);
    virtual float getMaxLife();
    virtual float getCurrentLife();
    virtual void takeDamage(float damage);
};
