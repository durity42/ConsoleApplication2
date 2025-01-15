#include "Vector2.h"

Vector2::Vector2(float m_x, float m_y) : x(m_x), y(m_y) 
{

}

float Vector2::getX()
{
    return x;
}

float Vector2::getY()
{
    return y;
}

void Vector2::setX(float m_x)
{
    x = m_x;
}

void Vector2::setY(float m_y)
{
    y = m_y;
}
