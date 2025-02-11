#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "supemon_struct.h"
#include "player_struct.h"

moves pound;
moves folliage;
moves scratch;
moves shell;
moves grawl;

supemon supertirtle;
supemon supasaur;
supemon supmander;
supemon  supachu;
supemon  supabro;
supemon  supaghost;
supemon  supaflora;
supemon  suponflex;
supemon  supaflame;


void init_all_supemon_and_moves() {
    //supemon
    init_pound();
    init_grawl();
    init_folliage();
    init_scratch();
    init_shell();
    //init_supaghost();
    //init_supaflora();
    //init_suponflex();
    //init_supaflame();

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

//initialisation des moves



void init_pound(){
    strcpy(pound.name, "Pound");
    pound.damage = 3;
}


void init_folliage(){
    strcpy(folliage.name, "folliage");
    folliage.evasion_agment=1;
}



void init_scratch(){
    strcpy(scratch.name, "scratch");
    scratch.damage=3;

}



void init_shell(){
    strcpy(shell.name, "Shell");
    shell.defense_augment=1;
}



void init_grawl(){
    strcpy(grawl.name, "Grawl");
    grawl.attack_augment=1;
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

    supasaur.count_of_moves = 2;

    supasaur.moves_list[0] = pound;
    supasaur.moves_list[1] = folliage;

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

    supertirtle.count_of_moves=2;

    supertirtle.moves_list[0] = pound;
    supertirtle.moves_list[1] = shell;
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

    supmander.count_of_moves=2;

    supmander.moves_list[0] = scratch;
    supmander.moves_list[1] = grawl;
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

    supachu.count_of_moves=2;

    supmander.moves_list[0] = scratch;
    supmander.moves_list[1] = grawl;
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

    supabro.count_of_moves=2;

    supabro.moves_list[0] = pound;
    supabro.moves_list[1] = folliage;

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

    supaghost.count_of_moves=2;

    supaghost.moves_list[0] = pound;
    supaghost.moves_list[1] = folliage;
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

    supaflora.count_of_moves=2;
    supaflora.moves_list[0] = pound;
    supaflora.moves_list[1] = folliage;
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

    suponflex.count_of_moves=2;

    suponflex.moves_list[0] = pound;
    suponflex.moves_list[1] = folliage;

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

    supaflame.count_of_moves=2;

    suponflex.moves_list[0] = pound;
    suponflex.moves_list[1] = folliage;
}



void display_supemon(){
    printf("=========================================================================================================\n");
    printf("your supemon are :\n\n");

    for(int i = 0 ; i < one.supemon_count; i++){
                printf("%s - Level : %hd, HP: %hd, Attack: %hd, Defense: %hd, Speed: %hd, Accuracy %hd, Evasion %lf id : |%d| \n",
                one.supemon_list[i].name,
                one.supemon_list[i].level,
                one.supemon_list[i].hp,
                one.supemon_list[i].attack,
                one.supemon_list[i].defense,
                one.supemon_list[i].speed,
                one.supemon_list[i].accuracy,
                one.supemon_list[i].evasion,
                i + 1);
            printf("=========================================================================================================\n");
    };
}

void level_up(supemon selected) {
    if (selected.experience < 500 + (selected.level - 1) * 1000) {
        return; // Not enough experience
    }

    selected.level++;


    int stats[] = {selected.max_hp, selected.base_attack, selected.base_defense, selected.base_evasion, selected.base_accuracy, selected.speed};
    int num_stats = sizeof(stats) / sizeof(stats[0]);

    for (int i = 0; i < num_stats; i++) {
        double new_value = stats[i] * 1.3;
        stats[i] = (rand() % 2 == 0) ? floor(new_value) : ceil(new_value);
    }

    selected.hp = selected.max_hp;
    selected.attack = selected.base_attack;
    selected.defense = selected.base_defense;
    selected.evasion = selected.base_evasion;
    selected.accuracy = selected.base_accuracy;

    printf("%s leveled up to %d!\n", selected.name, selected.level);
}

