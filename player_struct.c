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
        one.mode = 1;
        one.item_count=0;

    } else {

        one.supcoin = 100;
        one.supemon_count = 0;
        one.mode = 0;
        one.item_count=0;
    }
}

void add_supemon_to_player(int choice) {
    supemon selected;

    switch(choice) {
        case 1:
            selected = supmander;
            printf("supmander is now in your team \n");
            break;

        case 2:
            selected = supasaur;
            printf("supasaur is now in your team \n");
            break;

        case 3:
            selected = supertirtle;
            printf("supertirtle is now in your team \n");
            break;

        case 4:
            selected = supachu;
            printf("supachu is now in your team \n");
            break;

        case 5:
            selected = supabro;
            printf("supabro is now in your team \n");
            break;

        case 6:
            selected = supaghost;
            printf("supaghost is now in your team \n");
            break;

        case 7:
            selected = supaflora;
            printf("supaflora is now in your team \n");
            break;

        case 8:
            selected = suponflex;
            printf("suponflex is now in your team \n");
            break;

        case 9:
            selected = supaflame;
            printf("supaflame is now in your team \n");
            break;

        default:
            printf("Invalid choice, try again.\n");
            return;
    }

    one.supemon_list[one.supemon_count] = selected;
    one.supemon_count = one.supemon_count + 1;

};


void select_supemon(){
    short i = 0;
    printf("=========================================================================================================\n");
    printf("your supemon are :\n\n");

    for(i ; i < one.supemon_count; i++){
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
    };

short selection;
printf("Enter the id of the supemon you want to select: ");
scanf(" %hd", &selection);

short agreement;
printf("You choose %s. Are you sure? (1 = YES, 2 = NO): ", one.supemon_list[selection].name);
scanf(" %hd", &agreement);

if (agreement == 1) {
    // Copier le Supemon sélectionné dans choosen_supemon
    one.choosen_supemon[0] = one.supemon_list[selection];
    // Copier le nom explicitement
    strcpy(one.choosen_supemon[0].name, one.supemon_list[selection].name);

    printf("%s is ready for this challenge!\n", one.choosen_supemon[0].name);
} else if (agreement == 2) {
    printf("Please choose a new supemon\n");
    select_supemon();
} else {
    printf("Wrong number\n");
}




}
