#include "BreakableObject.h"

BreakableObject::BreakableObject(float x, float y, float maxLife, float currentLife) : Entity(x, y), Alive(maxLife, currentLife)
{
    std::cout << "Breakable Object just created at x = " << x << " and y = " << y << " with " << maxLife << " life" << std::endl;
}

void BreakableObject::takeDamage(float damage)
{
    Alive::takeDamage(damage);
    if (currentLife <= 0)
    {
        std::cout << "Breakable Object just broke" << std::endl;
    }
}
