#pragma once
#include "Vector2.h"

class Entity
{
protected:
    Vector2 mPosition;

public:
    Entity(float x, float y);
    virtual ~Entity() = default;
    virtual Vector2 getPosition();
    virtual void setPosition(float x, float y);
};
