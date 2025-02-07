#include <stdio.h>
#include <stdlib.h>
#include "supemon_struct.h"

supemon supasaur;
supemon supertirtle;
supemon supmander;
supemon supachu;
supemon supabro;
supemon supaghost;
supemon supaflora;
supemon suponflex;
supemon supaflame;

void apply_move(supemon *name, int move_id) {
    switch (move_id) {

        case 1: // Scratch
            printf("%s uses Scratch! A fast claw attack!\n");
            // Appliquer des dégâts ici
            break;

        case 2: // Growl
            printf("%s uses Growl! The opponent's attack is lowered!\n");
            // Modifier les stats de l'adversaire ici
            break;

        case 3: // Pound
            printf("%s uses Pound! A direct hit!\n");
            // Appliquer des dégâts ici
            break;

        case 4: // Shell Defense
            printf("%s uses Shell Defense! Defense is increased!\n");
            // Augmenter la défense ici
            break;

        case 5: // Folliage
            printf("%s uses Folliage! Evasion is now increased!\n");
            //
            break;

        case 6: // Thunder
            printf("%s uses Thunder! A big lightning bolt strikes the opponent!\n");
            //
            break;

        case 7: // terror
            printf("%s uses Terror! the opponent is losing is mind!\n");
            //
            break;

        case 8: // natural heal
            printf("%s uses Natural healing! He is recovering hp!\n");
            //
            break;

        case 9: // Flamme
            printf("%s throw a flamme ! the opponents might be in fire!\n");
            //
            break;


        default:
            printf("Unknown move!\n");
    }
}

void init_all_supemon() {
    init_supertirtle();
    init_supasaur();
    init_supmander();
    init_supachu();
    init_supabro();
    init_supaghost();
    init_supaflora();
    init_suponflex();
    init_supaflame();
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

    supasaur.first_move = 3;
    supasaur.second_move = 5;

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

    supertirtle.first_move = 3;
    supertirtle.second_move = 4;
}

void init_supmander() {

    strcpy(supmander.name, "Supmander");
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

    supmander.first_move = 1;
    supmander.second_move = 2;

}

void init_supachu() {
    strcpy(supachu.name, "Supachu");
    supachu.level = 1;
    supachu.experience = 0;
    supachu.hp = 8;
    supachu.max_hp = 8;
    supachu.attack = 2;
    supachu.base_attack = 2;
    supachu.defense = 1;
    supachu.base_defense = 1;
    supachu.evasion = 4;
    supachu.base_evasion = 4;
    supachu.accuracy = 3;
    supachu.base_accuracy = 3;
    supachu.speed = 4;

    supachu.first_move = 3;
    supachu.second_move = 6;
}

void init_supabro() {
    strcpy(supabro.name, "Supabro");
    supabro.level = 1;
    supabro.experience = 0;
    supabro.hp = 12;
    supabro.max_hp = 12;
    supabro.attack = 1;
    supabro.base_attack = 1;
    supabro.defense = 3;
    supabro.base_defense = 3;
    supabro.evasion = 1;
    supabro.base_evasion = 1;
    supabro.accuracy = 2;
    supabro.base_accuracy = 2;
    supabro.speed = 1;

    supabro.first_move = 2;
    supabro.second_move = 3;
    supabro.third_move = 4;
}

void init_supaghost() {
    strcpy(supaghost.name, "Supaghost");
    supaghost.level = 1;
    supaghost.experience = 0;
    supaghost.hp = 9;
    supaghost.max_hp = 9;
    supaghost.attack = 2;
    supaghost.base_attack = 2;
    supaghost.defense = 1;
    supaghost.base_defense = 1;
    supaghost.evasion = 5;
    supaghost.base_evasion = 5;
    supaghost.accuracy = 3;
    supaghost.base_accuracy = 3;
    supaghost.speed = 3;

    supaghost.first_move = 7;
    supaghost.second_move = 5;
}

void init_supaflora() {
    strcpy(supaflora.name, "Supaflora");
    supaflora.level = 1;
    supaflora.experience = 0;
    supaflora.hp = 11;
    supaflora.max_hp = 11;
    supaflora.attack = 1;
    supaflora.base_attack = 1;
    supaflora.defense = 2;
    supaflora.base_defense = 2;
    supaflora.evasion = 2;
    supaflora.base_evasion = 2;
    supaflora.accuracy = 2;
    supaflora.base_accuracy = 2;
    supaflora.speed = 2;

    supaflora.first_move = 1;
    supaflora.second_move = 8;
}

void init_suponflex() {
    strcpy(suponflex.name, "Suponflex");
    suponflex.level = 1;
    suponflex.experience = 0;
    suponflex.hp = 14;
    suponflex.max_hp = 14;
    suponflex.attack = 5;
    suponflex.base_attack = 5;
    suponflex.defense = 1;
    suponflex.base_defense = 1;
    suponflex.evasion = 2;
    suponflex.base_evasion = 2;
    suponflex.accuracy = 2;
    suponflex.base_accuracy = 2;
    suponflex.speed = 3;

    suponflex.first_move = 3;
}

void init_supaflame() {
    strcpy(supaflame.name, "Supaflame");
    supaflame.level = 1;
    supaflame.experience = 0;
    supaflame.hp = 9;
    supaflame.max_hp = 9;
    supaflame.attack = 2;
    supaflame.base_attack = 2;
    supaflame.defense = 1;
    supaflame.base_defense = 1;
    supaflame.evasion = 3;
    supaflame.base_evasion = 3;
    supaflame.accuracy = 3;
    supaflame.base_accuracy = 3;
    supaflame.speed = 4;

    supaflame.first_move = 1;
    supaflame.second_move = 9;
}

