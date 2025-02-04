#include <stdio.h>
#include <stdlib.h>
#include "center.h"
#include "supemon_struct.h"
#include "player_struct.h"

extern supemon supertirtle;
extern supemon supasaur;
extern player one;

void open_center(){
    int center_choice;

    printf("+--------------------------------+\n");
    printf("|      Welcome to the center !   |\n");
    printf("|                                |\n");
    printf("|      1 - show the supodeck     |\n");
    printf("|      2 - show my supemon       |\n");
    printf("|      3 - exit                  |\n");
    printf("|                                |\n");
    printf("+--------------------------------+\n");

    printf("Enter your choice (1 or 2): ");
    scanf("%d", &center_choice);
    printf("\n");

    if(center_choice == 1){
        first_choice();
    }else if(center_choice == 2){
        //second_choice();
    }else{
        printf("exit");
    }
}


void first_choice(){

    supemon all_supemon[3] = { supertirtle, supasaur, supmander};

    for(int i = 0 ; i < 3; i++){
                printf("%s - HP: %d, Attack: %d, Defense: %d, Speed: %d\n\n",
               all_supemon[i].name,
               all_supemon[i].hp,
               all_supemon[i].attack,
               all_supemon[i].defense,
               all_supemon[i].speed);
    };
}

//void second_choice(){

    //printf("%s's supemon are : \n", one.name);

    //for(int i = 0 ; i < 3; i++){
            //printf("%s - HP: %d, Attack: %d, Defense: %d, Speed: %d\n\n",
               //one.supemon_list[i].name,
               //one.supemon_list[i].hp,
               ////one.supemon_list[i].defense,
               //one.supemon_list[i].speed);
    //};

