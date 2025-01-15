#include <iostream>
#include "World.h"

int main() {
    // Initialiser un World
    World world;

    // Appeler la fonction Init pour initialiser les entit�s
    world.Init();

    // Ex�cuter des Steps jusqu'� la fin de la simulation
    while (!world.Step()) {
        // La boucle continue jusqu'� ce que Step retourne true
    }

    return 0;
}
