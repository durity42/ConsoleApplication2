#include "Vector2.h"

Vector2::Vector2(float m_x, float m_y) : x(m_x), y(m_y) 
{

}

float Vector2::getx()
{
    std::cout << x << std::endl;
    return x;
}

float Vector2::gety()
{
    std::cout << y << std::endl;
    return y;
}

void Vector2::setx(float m_x)
{
    x = m_x;
}

void Vector2::sety(float m_y)
{
    y = m_y;
}
