#include "AMovable.h"

AMovable::AMovable(float x, float y, float S) : UniVector(x, y)
{

}

void AMovable::setDirection(float x, float y)
{
	UniVector.setx(x);
	UniVector.sety(y);
}

void AMovable::setSpeed(float S)
{
	Speed = S;
}

void AMovable::Move()
{

}