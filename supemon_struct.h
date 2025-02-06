#ifndef SUPEMON_STRUCT_H_INCLUDED
#define SUPEMON_STRUCT_H_INCLUDED

#define MAX_NAME_LENGTH 50
#define MAX_MOVES 4

typedef struct {
    char name[MAX_NAME_LENGTH];
    short level;

    short experience;

    short hp;
    short max_hp;

    short attack;
    short base_attack;

    short defense;
    short base_defense;

    double evasion;
    double base_evasion;

    short accuracy;
    short base_accuracy;

    short speed;

    short first_move,second_move,third_move;


} supemon;

void init_all_supemon();

extern supemon supertirtle;
extern supemon supasaur;
extern supemon supmander;
extern supemon  supachu;
extern supemon  supabro;
extern supemon  supaghost;
extern supemon  supaflora;
extern supemon  suponflex;
extern supemon  supaflame;

#endif // SUPEMON_STRUCT_H_INCLUDED
