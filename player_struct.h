#ifndef PLAYER_STRUCT_H_INCLUDED
#define PLAYER_STRUCT_H_INCLUDED

#include "supemon_struct.h"  // Ajoute cette ligne pour définir le type 'supemon'
#include <string.h>

char* ask_name();
void choice_supemon();
void add_supemon_to_player(int choice);
void init_one();

typedef struct {

    char name[50];
    supemon supemon_list[9];
    int supemon_count;
    char selected_supemon;
    int supcoin;
    char items_list[100][15];
    short mode;

} player;

extern player one;

#endif // PLAYER_STRUCT_H_INCLUDED
