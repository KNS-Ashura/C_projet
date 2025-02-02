#include <stdio.h>
#include <stdlib.h>
#include "supemon_struct.h"

#define MAX_NAME_LENGTH 50
#define MAX_MOVES 4  // Définit un maximum de 4 attaques par exemple

void apply_move(supemon *pokemon, int move_id) {
    switch (move_id) {
        case 1: // Pound (deals 2 damage)
            printf("%s utilise Pound !\n", pokemon->name);
            // Appliquer des dégâts à l'adversaire (à gérer ailleurs)
            break;
        case 2: // Foliage (gives 1 Evasion)
            printf("%s utilise Foliage et gagne +1 en Evasion !\n", pokemon->name);
            pokemon->evasion += 1;
            break;
        case 3: // Augmente l'attaque de 3
            printf("%s utilise une attaque spéciale et gagne +3 en Attaque !\n", pokemon->name);
            pokemon->attack += 3;
            break;
        case 4: // Shell (gives 1 Defense)
            printf("%s utilise Shell et gagne +1 en Défense !\n", pokemon->name);
            pokemon->defense += 1;
            break;
        default:
            printf("Move inconnu !\n");
    }
}

supemon supasaur;

void init_supasaur() {

    strcpy(supasaur.name, "Supasaur");
    supasaur.level = 1;
    supasaur.experience = 0;
    supasaur.hp = 9;
    supasaur.max_hp = 9;
    supasaur.attack = 1;
    supasaur.base_attack = 1;
    supasaur.defense = 1;
    supasaur.base_defense = 1;
    supasaur.evasion = 3;
    supasaur.base_evasion = 3;
    supasaur.accuracy = 2;
    supasaur.base_accuracy = 2;
    supasaur.speed = 2;
}

supemon supertirtle;

void init_supertirtle() {
    strcpy(supertirtle.name, "Supertirtle");
    supertirtle.level = 1;
    supertirtle.experience = 0;
    supertirtle.hp = 11;
    supertirtle.max_hp = 11;
    supertirtle.attack = 1;
    supertirtle.base_attack = 1;
    supertirtle.defense = 2;
    supertirtle.base_defense = 2;
    supertirtle.evasion = 2;
    supertirtle.base_evasion = 2;
    supertirtle.accuracy = 1;
    supertirtle.base_accuracy = 1;
    supertirtle.speed = 2;

}
