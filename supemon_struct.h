#ifndef SUPEMON_STRUCT_H_INCLUDED
#define SUPEMON_STRUCT_H_INCLUDED

#define MAX_NAME_LENGTH 50
#define MAX_MOVES 4

typedef struct {
    char name[20];

    short damage;

    short hp_regen;

    short attack_augment;
    short defense_augment;
    short evasion_agment;

    short attack_debuf;
    short defense_debuf;
    short evasion_debuf;

    char throw_sentence[30];


} moves;

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

    float evasion;
    float base_evasion;

    short accuracy;
    short base_accuracy;

    short speed;

    moves moves_list[2];
    short count_of_moves;


} supemon;

void init_all_supemon_and_moves();

//moves
void init_folliage();
void init_pound();
void init_shell();
void init_scratch();
void init_grawl();

//supemon
void init_supertirtle();
void init_supasaur();
void init_supmander();
void init_supachu();
void init_supabro();
void init_supaghost();
void init_supaflora();
void init_suponflex();
void init_supaflame();

extern moves pound;
extern moves folliage;
extern moves scratch;
extern moves shell;
extern moves grawl;

extern supemon supertirtle;
extern supemon supasaur;
extern supemon supmander;
extern supemon  supachu;
extern supemon  supabro;
extern supemon  supaghost;
extern supemon  supaflora;
extern supemon  suponflex;
extern supemon  supaflame;

void display_supemon();
void level_up(supemon s);

#endif // SUPEMON_STRUCT_H_INCLUDED
