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

void init_one() {
    char temp_name[50];
    strcpy(temp_name, ask_name());
    strcpy(one.name, temp_name);

    printf("Welcome, %s!\n", one.name);

    if (strcmp(temp_name, "admin") == 0) {

        printf("Access granted! You are the administrator.\n");
        one.supcoin = 9999;
        one.supemon_count = 0;
        one.selected_supemon = NULL;
        one.items_list[100][15];
        one.mode = 1;

    } else {

        one.items_list[100][15];

        one.supcoin = 0;
        one.supemon_count = 0;

        printf("You have %d supcoin\n", one.supcoin);
        one.selected_supemon = NULL;
        one.mode = 0;

    }
}

void add_supemon_to_player(int choice) {
    supemon selected;

    switch(choice) {
        case 1:
            selected = supmander;
            printf("supmander is now in your team");
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

    one.supemon_list[one.supemon_count] = selected;
    one.supemon_count = one.supemon_count + 1;

};
