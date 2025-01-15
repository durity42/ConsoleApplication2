#include <iostream>
#include "World.h"

int main() {
    // Initialiser un World
    World world;

    // Appeler la fonction Init pour initialiser les entités
    world.Init();

    // Exécuter des Steps jusqu'à la fin de la simulation
    while (!world.Step()) {
        // La boucle continue jusqu'à ce que Step retourne true
    }

    return 0;
}
