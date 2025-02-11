#include <stdio.h>
#include <stdlib.h>
#include "shop.h"
#include "supemon_struct.h"
#include "player_struct.h"
#include "center.h"
#include "shop.h"
#include "item_struct.h"
#include "wild_function.h"
#include "fight.h"

void choice_action(int *over);

int main() {
    // initialisation de plein de truc
    init_all_supemon_and_moves();
    init_all_item();
    init_one();
    init_master();



    int over = 0;

    if(one.mode == 1){
        add_supemon_to_player(1);
        add_supemon_to_player(2);
        add_supemon_to_player(3);
        add_supemon_to_player(4);
        add_supemon_to_player(5);
        add_supemon_to_player(6);
        add_supemon_to_player(7);
        add_supemon_to_player(8);
        add_supemon_to_player(9);

    }else if(one.mode != 1){
        choice_supemon();
    }

    while(over == 0) {
        choice_action(&over);
    }

    printf("Game Over. Goodbye!\n");
    return 0;
};


void choice_action(int *over) {
    int choice_place;

    printf("+--------------------------------+\n");
    printf("|   Where do you want to go ?    |\n");
    printf("|                                |\n");
    printf("|      1 - Into the wild         |\n");
    printf("|      2 - In the shop           |\n");
    printf("|      3 - In the supemon center |\n");
    printf("|      4 - Leave the game        |\n");
    printf("+--------------------------------+\n");
    printf("Enter your choice (1, 2, 3 or 4): ");
    scanf("%d", &choice_place);
    switch (choice_place) {
        case 1:
            printf("Into the wild!\n");
            main_wild_funct();
            break;
        case 2:
            printf("In the shop!\n");
            open_shop();
            break;
        case 3:
            printf("In the supemon center!\n");
            open_center();
            break;
        case 4:
            printf("Leaving the game!\n");
            *over = 1; // Modifier `over` via son adresse
            break;
        default:
            printf("Invalid choice, try again.\n");
            break;
    }
};
//////////////////////////////////// DECORATIONS


