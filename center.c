#include <stdio.h>
#include <stdlib.h>
#include "center.h"
#include "supemon_struct.h"
#include "player_struct.h"

extern player one;
void init_one();

void open_center(int *verif){
    int center_choice;

    if( *verif ==0 ){
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
    }else{
        printf("+--------------------------------+\n");
        printf("|                                |\n");
        printf("|      1 - show the supodeck     |\n");
        printf("|      2 - show my supemon       |\n");
        printf("|      3 - exit                  |\n");
        printf("|                                |\n");
        printf("+--------------------------------+\n");

        printf("Enter your choice (1 or 2): ");
        scanf("%d", &center_choice);
        printf("\n");
    }

    if(center_choice == 1){
        first_choice();
        *verif = 1;
    }else if(center_choice == 2){
        second_choice();
        *verif = 1;
    }else{
        printf("EXIT\n\n");
        *verif = 0;
        return;
    }
    open_center(verif);
}


void first_choice(){

    supemon all_supemon[9] = { supertirtle, supasaur, supmander, supachu, supabro, supaghost, supaflora, suponflex, supaflame};

    for(int i = 0 ; i < 9; i++){
                printf("+~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~+\n");
                printf("%d        %s \n", i, all_supemon[i].name);
                printf("+~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~+\n\n");
    };
}

void second_choice(){
            printf("=========================================================================================================\n");
    printf("your supemon are :\n\n");

    for(int i = 0 ; i < 8; i++){
            if(strcmp(one.supemon_list[i].name, "") != 0){
                printf("%s - Level : %hd, HP: %hd, Attack: %hd, Defense: %hd, Speed: %hd, Accuracy %hd, Evasion %lf id : |%d| \n",
                one.supemon_list[i].name,
                one.supemon_list[i].level,
                one.supemon_list[i].hp,
                one.supemon_list[i].attack,
                one.supemon_list[i].defense,
                one.supemon_list[i].speed,
                one.supemon_list[i].accuracy,
                one.supemon_list[i].evasion,
                i);
            printf("=========================================================================================================\n");
            }


    };
}
