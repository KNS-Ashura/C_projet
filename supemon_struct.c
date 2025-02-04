#include <stdio.h>
#include <stdlib.h>
#include "supemon_struct.h"

supemon supasaur;
supemon supertirtle;
supemon supmander;

void apply_move(supemon *pokemon, int move_id) {
    switch (move_id) {

        //SUPMANDER

        case 1: //Scratch
            printf("%s Supmander uses Scratch !\n", pokemon->name);
            // Appliquer des dégâts à l'adversaire (à gérer ailleurs)
            // a voir apres les combats
            break;

        case 2: //Grawl
            printf("%s Supmander use Grawl and gain +1 attack !\n", pokemon->name);
            supmander.attack += 1;
            break;

        //SUPASAUR

        case 3: //POUND
            printf("%s uses Pound ! \n", pokemon->name);
            // A VOIR APRES LES COMBATS
            break;

        case 4: // FOLLIAGE
            printf("%s Supasaur uses Folliage and gains +1 escape !\n", pokemon->name);
            supasaur.evasion +=1;
            break;

        //SUPERTIRTLE

        case 5:// POUND
            printf("%s uses Pound !\n", pokemon->name);
            //A VOIR APRES LES COMBATS

        case 6:// Shell
            printf("%s Uses Shell\n", pokemon->name);
            supertirtle.defense += 1;

        default:
            printf("Move inconnu !\n");
    }
}



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

void init_supmander() {

    strcpy(supmander.name, "supmander");
    supmander.level = 1;
    supmander.experience = 0;
    supmander.hp = 10;
    supmander.max_hp = 10;
    supmander.attack = 1;
    supmander.base_attack = 1;
    supmander.defense = 1;
    supmander.base_defense = 1;
    supmander.evasion = 1;
    supmander.base_evasion = 1;
    supmander.accuracy = 2;
    supmander.base_accuracy = 2;
    supmander.speed = 1;

}

