#include <stdio.h>
#include <stdlib.h>
#include "player_struct.h"

#define MAX_NAME_LENGTH 50

char ask_name() {
    char* name;

    printf("+-------------------------------+\n");
    printf("|       Enter your name:        |\n");
    printf("+-------------------------------+\n");
    gets(name);

    return name;
}

void choice_supemon() {
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
            return "Supmander";
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

player one;

void init_player() {
    strcpy(one.name, ask_name());
    //.selected_supemon = choice_supemon();
}

