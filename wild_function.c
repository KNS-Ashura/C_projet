#include <stdio.h>
#include <stdlib.h>
#include "supemon_struct.h"
#include "wild_function.h"

Wild_master master;

void init_master(){
    for(short i = 1; i < 10 ; i++){
        add_supemon_to_master(i);
    }
    printf("master is ready \n");
}

void main_wild_funct(){
    short direction;
    printf("+------------------------------------+\n");
    printf("| You are now entering into the wild |\n");
    printf("|       Where do you want to go ?    |\n");
    printf("|                                    |\n");
    printf("|       1 - Next to the lake         |\n");
    printf("|       2 - Go to the volcano        |\n");
    printf("|       3 - Enter the forest         |\n");
    printf("|       4 - Leave the wild           |\n");
    printf("+------------------------------------+\n");
    printf("Enter your choice (1, 2, 3 or 4): ");
    scanf(" %hd", &direction);

    switch(direction){

        case 1:
            printf("you are now going next to the lake\n");
            spawn_supemon_in_lake(generate_random_number(1,3));
            select_supemon();
            while(1 == 1){
            display_fight();
            display_choice();
            }
            break;

        case 2:
            printf("you walk in direction of the volcano\n");
            spawn_supemon_in_volcano(generate_random_number(1,3));
            select_supemon();
            while(1 == 1){
            display_fight();
            display_choice();
            }
            break;

        case 3:
            printf("you enter in the forest\n");
            spawn_supemon_in_forest(generate_random_number(1,3));
            select_supemon();
            while(1 == 1){
            display_fight();
            display_choice();
            }
            break;

        case 4:
            printf("you are now entering the village\n");
            break;

        default :
            printf("you choose a wrong number");
            break;
    }

};

int generate_random_number(int max, int min) {
    return min + rand() % (max - min + 1);
}


int spawn_supemon_in_lake(int spawn_number){
    supemon selected;

    switch(spawn_number) {

        case 1:
            selected = supasaur;
            break;

        case 2:
            selected = supertirtle;
            break;

        case 3:
            selected = supabro;
            break;


        default:
            printf("error");
            return;
    }
    master.spawned_supemon[0] = selected;
}

int spawn_supemon_in_volcano(int spawn_number){
    supemon selected;

    switch(spawn_number) {
        case 1:
            selected = supmander;
            break;

        case 2:
            selected = supaghost;
            break;

        case 3:
            selected = supaflame;
            break;

        default:
            printf("error");
            return;
    }
    master.spawned_supemon[0] = selected;
}


int spawn_supemon_in_forest(int spawn_number){
    supemon selected;

    switch(spawn_number) {


        case 1:
            selected = supachu;
            break;

        case 2:
            selected = supaflora;
            break;

        case 3:
            selected = suponflex;
            break;

        default:
            printf("error");
            return;
    }
    master.spawned_supemon[0] = selected;
}

void add_supemon_to_master(short choice) {
    supemon selected;

    switch(choice) {
        case 1:
            selected = supmander;
            break;

        case 2:
            selected = supasaur;
            break;

        case 3:
            selected = supertirtle;
            break;

        case 4:
            selected = supachu;
            break;

        case 5:
            selected = supabro;
            break;

        case 6:
            selected = supaghost;
            break;

        case 7:
            selected = supaflora;
            break;

        case 8:
            selected = suponflex;
            break;

        case 9:
            selected = supaflame;
            break;

        default:
            printf("Invalid choice, try again.\n");
            return;
    }

    master.wild_supemon[master.placement] = selected;
    master.placement = master.placement + 1;

};



