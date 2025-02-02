#ifndef PLAYER_STRUCT_H_INCLUDED
#define PLAYER_STRUCT_H_INCLUDED

void ask_name ();
void choice_supemon();

typedef struct {

    char name;
    char supemon_list;
    char selected_supemon;
    int supcoin;
    char items_list;

} player;

#endif // PLAYER_STRUCT_H_INCLUDED
