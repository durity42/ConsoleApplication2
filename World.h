#pragma once
#include <vector>
#include "Entity.h"
#include "StaticObject.h"
#include "BreakableObject.h"
#include "Mob.h"
#include "Player.h"

class World
{
    std::vector<Entity*> entities;

public:
    void Init();
    bool Step();
};
