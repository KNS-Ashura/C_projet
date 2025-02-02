#ifndef PLAYER_STRUCT_H_INCLUDED
#define PLAYER_STRUCT_H_INCLUDED

void ask_name ();
void choice_supemon();

typedef struct {

    char name[50];
    char supemon_list;
    char selected_supemon;
    int supcoin;
    char items_list[100][15];

} player;

#endif // PLAYER_STRUCT_H_INCLUDED
