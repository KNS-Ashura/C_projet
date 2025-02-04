#include <stdio.h>
#include <stdlib.h>
#include "shop.h"
#include "supemon_struct.h"
#include "player_struct.h"
#include "center.h"
#include "shop.h"

void choice_action(int *over);
int verif = 0;

int main() {
    // initialisation de plein de truc
    init_all_supemon();
    init_player();

    choice_supemon();

    int over = 0;


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
            break;
        case 2:
            printf("In the shop!\n");
            open_shop();
            break;
        case 3:
            printf("In the supemon center!\n");
            open_center(&verif);
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

