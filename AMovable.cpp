#include "AMovable.h"

AMovable::AMovable(const Vector2& direction, float speed) : mDirection(direction), mSpeed(speed)
{

}

void AMovable::setDirection(const Vector2& direction)
{
    mDirection = direction;
}

void AMovable::setSpeed(float speed)
{
    mSpeed = speed;
}

Vector2 AMovable::getDirection() const
{
    return mDirection;
}

float AMovable::getSpeed() const
{
    return mSpeed;
}
