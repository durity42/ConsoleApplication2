#pragma once
#include <iostream>

class Vector2
{
    float x; 
    float y;

public:
    Vector2(float m_x, float m_y);
    float getX();
    float getY();
    void setX(float m_x);
    void setY(float m_y);
};
