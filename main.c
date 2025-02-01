#include <stdio.h>
#include <stdlib.h>
#include "structures.h"

// declaration des procedures avec des pointeurs sur over
void ask_name();
void choice_supemon(int *over);
void choice_action(int *over);

int main() {
    int over = 0;

    ask_name();
    choice_supemon(&over);

    while(over == 0) {
        choice_action(&over);
    }

    printf("Game Over. Goodbye!\n");
    return 0;
}

void ask_name() {
    char name[50];
    printf("+-------------------------------+\n");
    printf("|       Enter your name:        |\n");
    printf("+-------------------------------+\n");
    scanf("%49s", name); // Limite à 49 caractères pour éviter un dépassement de buffer
    printf("Hello, %s!\n", name);
}

void choice_supemon(int *over) {
    int choice;

    printf("+--------------------------------+\n");
    printf("|   Choose a starter supemon:    |\n");
    printf("|                                |\n");
    printf("|      1 - Supmander             |\n");
    printf("|      2 - Supasaur              |\n");
    printf("|      3 - Suptirtle             |\n");
    printf("|                                |\n");
    printf("+--------------------------------+\n");
    printf("Enter your choice (1, 2, or 3): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("You chose Supmander! Good luck!\n");
            break;
        case 2:
            printf("You chose Supasaur! Good luck!\n");
            break;
        case 3:
            printf("You chose Suptirtle! Good luck!\n");
            break;
        default:
            printf("Invalid choice, try again.\n");
            return;
    }
}

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
            break;
        case 3:
            printf("In the supemon center!\n");
            break;
        case 4:
            printf("Leaving the game!\n");
            *over = 1; // Modifier `over` via son adresse
            break;
        default:
            printf("Invalid choice, try again.\n");
            break;
    }
}

