#include "Entity.h"
#include <iostream>

Entity::Entity(float x, float y) : mPosition(x, y)
{
}

Vector2 Entity::getPosition()
{
    std::cout << "Position: (" << mPosition.getx() << ", " << mPosition.gety() << ")" << std::endl;
    return mPosition;
}

void Entity::setPosition(float x, float y)
{
    mPosition.setx(x);
    mPosition.sety(y);
}
