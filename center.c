#include <stdio.h>
#include <stdlib.h>
#include "center.h"
#include "supemon_struct.h"
#include "player_struct.h"


extern player one;
void init_one();

void open_center(){
    int center_choice;

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

    if(center_choice == 1){
        display_supodeck();
    }else if(center_choice == 2){
        heal_supemon();
    }else{
        printf("EXIT\n\n");
        return;
    }
    open_center();
}


void display_supodeck(){

    supemon all_supemon[9] = { supertirtle,
                               supasaur,
                               supmander,
                               supachu,
                               supabro,
                               supaghost,
                               supaflora,
                               suponflex,
                               supaflame};

    for(int i = 0 ; i < 9; i++){
                printf("+~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~+\n");
                printf("%d        %s \n", i, all_supemon[i].name);
                printf("+~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~+\n\n");
    };
}

void heal_supemon(){

    display_supemon();

    short selection;
    printf("Enter the id of the supemon you want to heal: ");
    scanf(" %hd", &selection);
    selection -= 1;

    short agreement;
    printf("You choose %s. Are you sure? (1 = YES, 2 = NO): ", one.supemon_list[selection].name);
    scanf(" %hd", &agreement);

    if (agreement == 1) {
        one.supemon_list[selection].hp = one.supemon_list[selection].max_hp;
        printf("%s is now healed!\n\n", one.supemon_list[selection].name);
    } else if (agreement == 2) {
        printf("Please choose a new supemon\n");
        heal_supemon();
    } else {
    printf("Wrong number\n");
    }
}
