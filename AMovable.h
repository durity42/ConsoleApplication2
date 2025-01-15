#pragma once
#include "Vector2.h"

class AMovable
{
protected:
    Vector2 mDirection;
    float mSpeed;
public:
    AMovable(const Vector2& direction, float speed);
    virtual void setDirection(const Vector2& direction);
    virtual void setSpeed(float speed);
    virtual void move() = 0;
    Vector2 getDirection() const;
    float getSpeed() const;
};
