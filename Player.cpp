#include "Player.h"

Player::Player(float x, float y, float maxLife, float currentLife, const Vector2& direction, float speed) : Entity(x, y), Alive(maxLife, currentLife), AMovable(direction, speed)
{
    std::cout << "Player just created at x = " << x << " and y = " << y << " with " << maxLife << " life with direction x = " << mDirection.getX() << " and y = " << mDirection.getY() << std::endl;
}

void Player::takeDamage(float damage)
{
    Alive::takeDamage(damage);
    if (currentLife <= 0)
    {
        std::cout << "Player just died" << std::endl;
    }
}

void Player::move()
{
    float newX = Entity::getPosition().getX() + mDirection.getX() * mSpeed;
    float newY = Entity::getPosition().getY() + mDirection.getY() * mSpeed;
    Entity::setPosition(newX, newY);
    std::cout << "Player moved to x = " << newX << " and y = " << newY << std::endl;
}

void Player::attack(Alive* target)
{
    if (target->getCurrentLife() > 0) 
    {
        target->takeDamage(10);
        std::cout << "Player just attacked." << std::endl;
    }
}
