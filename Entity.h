#pragma once
#include "Vector2.h"

class Entity
{
    Vector2 mPosition;

public:
    Entity(float x, float y);
    Vector2 getPosition();
    void setPosition(float x, float y);
};
