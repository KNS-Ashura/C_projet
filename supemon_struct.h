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

    short evasion;
    short base_evasion;

    short accuracy;
    short base_accuracy;

    short speed;


} supemon;

#endif // SUPEMON_STRUCT_H_INCLUDED
