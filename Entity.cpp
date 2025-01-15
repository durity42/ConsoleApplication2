#include "Entity.h"

Entity::Entity(float x, float y) : mPosition(x, y) 
{

}

Vector2 Entity::getPosition()
{
    return mPosition;
}

void Entity::setPosition(float x, float y)
{
    mPosition.setX(x);
    mPosition.setY(y);
}
