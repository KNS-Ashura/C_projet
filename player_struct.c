#include <stdio.h>
#include <stdlib.h>
#include "player_struct.h"

#define MAX_NAME_LENGTH 50

char* ask_name() {
    static char name[50];

    printf("+-------------------------------+\n");
    printf("|       Enter your name:        |\n");
    printf("+-------------------------------+\n");
    printf("-> ");

    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = 0;

    return name;
};

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
            add_supemon_to_player(1);
            break;
        case 2:
            printf("You chose Supasaur! Good luck!\n");
            add_supemon_to_player(2);
            break;
        case 3:
            printf("You chose Suptirtle! Good luck!\n");
            add_supemon_to_player(3);
            break;
        default:
            printf("Invalid choice, try again.\n");
            return;
    }
};

player one;

void init_player() {

    strcpy(one.name, ask_name());
    printf("Welcome, %s!\n", one.name);

    one.items_list[100][15];

    one.supcoin = 0;

    supemon supemon_list[3];

    printf("you have %d supcoin\n" , one.supcoin);
    one.selected_supemon = NULL;
};

void add_supemon_to_player(int choice) {
    supemon selected;

    if (choice == 1) {
        selected = supmander;
    } else if (choice == 2) {
        selected = supasaur;
    } else if (choice == 3) {
        selected = supertirtle;
    } else {
        printf("Choix invalide !\n");
    }

    one.supemon_list[one.supemon_count] = selected;
    one.supemon_count += 1;

};
