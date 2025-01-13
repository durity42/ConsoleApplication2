#pragma once
#include "Vector2.h"

class AMovable
{
	Vector2 UniVector;
	float Speed;

public:

	AMovable(float x, float y, float S);
	virtual void setDirection(float x, float y);
	virtual void setSpeed(float S);
	virtual void Move();

};

