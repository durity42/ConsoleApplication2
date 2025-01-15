#include "Mob.h"

Mob::Mob(float x, float y, float maxLife, float currentLife, const Vector2& direction, float speed) : Entity(x, y), Alive(maxLife, currentLife), AMovable(direction, speed)
{
    std::cout << "Mob just created at x = " << x << " and y = " << y << " with " << maxLife << " life with direction x = " << mDirection.getX() << " and y = " << mDirection.getY() << std::endl;
}

void Mob::takeDamage(float damage)
{
    Alive::takeDamage(damage);
    if (currentLife <= 0)
    {
        std::cout << "Mob just died" << std::endl;
    }
}

void Mob::move()
{
    float newX = Entity::getPosition().getX() + mDirection.getX() * mSpeed;
    float newY = Entity::getPosition().getY() + mDirection.getY() * mSpeed;
    Entity::setPosition(newX, newY);
    std::cout << "Mob moved to x = " << newX << " and y = " << newY << std::endl;
}
