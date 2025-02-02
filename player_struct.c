#include <stdio.h>
#include <stdlib.h>
#include "player_struct.h"

void ask_name(char *name) {
    printf("+-------------------------------+\n");
    printf("|       Enter your name:        |\n");
    printf("+-------------------------------+\n");
    fgets(name, MAX_NAME_LENGTH, stdin);

    name[strcspn(name, "\n")] = 0;
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
            printf("nice");
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

void init_player(Player *player, const char *name) {
    strcpy(player->name, name);
    player->level = 1;
    player->hp = 10;
}
