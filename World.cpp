#include "World.h"
#include <iostream>
#include <cmath>

float distance(float x1, float y1, float x2, float y2) 
{
    return std::sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}

void World::Init() 
{
    StaticObject* staticObj = new StaticObject(1.0f, 2.0f);
    BreakableObject* breakableObj = new BreakableObject(3.0f, 4.0f, 1.0f, 1.0f);
    Vector2 mobDirection(1.0f, 1.0f);
    Mob* mob = new Mob(5.0f, 6.0f, 20.0f, 20.0f, mobDirection, 0.5f);
    Vector2 playerDirection(0.5f, 0.5f);
    Player* player = new Player(7.0f, 8.0f, 10.0f, 10.0f, playerDirection, 1.0f);
    entities.push_back(staticObj);
    entities.push_back(breakableObj);
    entities.push_back(mob);
    entities.push_back(player);
}

bool World::Step() 
{
    bool allMobsDead = true;
    bool allBreakableObjectsDead = true;
    BreakableObject* targetBreakableObject = nullptr;
    Mob* targetMob = nullptr;
    for (auto entity : entities) 
    {
        if (auto breakableObj = dynamic_cast<BreakableObject*>(entity)) 
        {
            if (breakableObj->getCurrentLife() > 0) 
            {
                targetBreakableObject = breakableObj;
                allBreakableObjectsDead = false;
            }
        }
        else if (auto mob = dynamic_cast<Mob*>(entity))
        {
            if (mob->getCurrentLife() > 0)
            {
                targetMob = mob;
                allMobsDead = false;
            }
        }
    }
    for (auto entity : entities) 
    {
        if (auto mob = dynamic_cast<Mob*>(entity)) 
        {
            if (targetBreakableObject != nullptr) 
            {
                float dx = targetBreakableObject->getPosition().getX() - mob->getPosition().getX();
                float dy = targetBreakableObject->getPosition().getY() - mob->getPosition().getY();
                float magnitude = std::sqrt(dx * dx + dy * dy);
                if (magnitude > 0)
                {
                    float newX = mob->getPosition().getX() + (dx / magnitude) * mob->getSpeed();
                    float newY = mob->getPosition().getY() + (dy / magnitude) * mob->getSpeed();
                    mob->setPosition(newX, newY);
                    std::cout << "Mob moved to x = " << newX << " and y = " << newY << std::endl;
                }
            }
        }
        else if (auto player = dynamic_cast<Player*>(entity))
        {
            if (!allMobsDead) 
            {
                float dx = targetMob->getPosition().getX() - player->getPosition().getX();
                float dy = targetMob->getPosition().getY() - player->getPosition().getY();
                float magnitude = std::sqrt(dx * dx + dy * dy);
                if (magnitude > 0) 
                {
                    float newX = player->getPosition().getX() + (dx / magnitude) * player->getSpeed();
                    float newY = player->getPosition().getY() + (dy / magnitude) * player->getSpeed();
                    player->setPosition(newX, newY);
                    std::cout << "Player moved to x = " << newX << " and y = " << newY << std::endl;
                    if (distance(newX, newY, targetMob->getPosition().getX(), targetMob->getPosition().getY()) <= 1.0f)
                    {
                        player->attack(targetMob);
                    }
                }
            }
            else if (!allBreakableObjectsDead) 
            {
                float dx = targetBreakableObject->getPosition().getX() - player->getPosition().getX();
                float dy = targetBreakableObject->getPosition().getY() - player->getPosition().getY();
                float magnitude = std::sqrt(dx * dx + dy * dy);
                if (magnitude > 0) 
                {
                    float newX = player->getPosition().getX() + (dx / magnitude) * player->getSpeed();
                    float newY = player->getPosition().getY() + (dy / magnitude) * player->getSpeed();
                    player->setPosition(newX, newY);
                    std::cout << "Player moved to x = " << newX << " and y = " << newY << std::endl;
                    if (distance(newX, newY, targetBreakableObject->getPosition().getX(), targetBreakableObject->getPosition().getY()) <= 1.0f) 
                    {
                        player->attack(targetBreakableObject);
                    }
                }
            }
        }
    }

    if (allMobsDead && allBreakableObjectsDead) 
    {
        std::cout << "Simulation Finished" << std::endl;
        return true;
    }
    return false;
}
