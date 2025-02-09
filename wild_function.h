#ifndef WILD_FUNCTION_H_INCLUDED
#define WILD_FUNCTION_H_INCLUDED

void main_wild_funct();

typedef struct{
    supemon wild_supemon[9];
    supemon spawned_supemon[1];
    short placement;

} Wild_master;

extern Wild_master master;

void add_supemon_to_master(short choice);
void init_master();

int generate_random_number(int min, int max);
int spawn_supemon_in_forest(int spawn_number);
int spawn_supemon_in_lake(int spawn_number);
int spawn_supemon_in_volcano(int spawn_number);

#endif // WILD_FUNCTION_H_INCLUDED
