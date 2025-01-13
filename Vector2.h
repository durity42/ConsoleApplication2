#pragma once
#include <iostream>

class Vector2
{
    float x; 
    float y;

public:
    Vector2(float m_x, float m_y);
    float getx();
    float gety();
    void setx(float m_x);
    void sety(float m_y);
};
