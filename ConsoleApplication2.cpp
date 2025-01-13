#include <iostream>
#include "Vector2.h"
#include "Entity.h"

int main()
{
	Vector2 vec(1, 2);
	Entity ent(5, 6);
	vec.getx();
	vec.gety();
	ent.getPosition();
}
