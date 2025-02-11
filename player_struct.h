#ifndef PLAYER_STRUCT_H_INCLUDED
#define PLAYER_STRUCT_H_INCLUDED

#include "supemon_struct.h"  // Ajoute cette ligne pour définir le type 'supemon'
#include "item_struct.h"
#include <string.h>

char* ask_name();
void choice_supemon();
void add_supemon_to_player(int choice);
void init_one();
void select_supemon();

typedef struct {

    char name[50];
    supemon supemon_list[9];
    item item_list[10];
    int supemon_count;
    supemon choosen_supemon[1];
    int supcoin;
    short mode;
    short item_count;



} player;

extern player one;

#endif // PLAYER_STRUCT_H_INCLUDED
