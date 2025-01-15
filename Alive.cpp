#include "Alive.h"

Alive::Alive(float maxLife, float currentLife) : maxLife(maxLife), currentLife(currentLife)
{
    if (currentLife > maxLife) 
    {
        currentLife = maxLife;
    }
}

float Alive::getMaxLife()
{
    return maxLife;
}

float Alive::getCurrentLife()
{
    return currentLife;
}

void Alive::takeDamage(float damage)
{
    currentLife -= damage;
    if (currentLife < 0) 
    {
        currentLife = 0;
    }
}
