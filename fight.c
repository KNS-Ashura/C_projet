#include <stdio.h>
#include <stdlib.h>

#include "fight.h"
#include "wild_function.h"
#include "player_struct.h"
#include "item_struct.h"
#include "shop.h"


void display_fight(){
    printf("====================================\n");
    printf("%s (enemy)\n", master.spawned_supemon[0].name);
    printf("------------------------------------\n");
    printf("HP: %hd     LVL: %hd\n",master.spawned_supemon[0].hp, master.spawned_supemon[0].level);
    printf("ATCK: %hd     DEF: %hd\n",master.spawned_supemon[0].attack, master.spawned_supemon[0].defense);
    printf("ACC: %hd     EVA: %f\n",master.spawned_supemon[0].accuracy, master.spawned_supemon[0].evasion);
    printf("====================================\n\n");

    printf("====================================\n");
    printf("%s (%s)\n", one.choosen_supemon[0].name,one.name);
    printf("------------------------------------\n");
    printf("HP: %hd     LVL: %hd\n",one.choosen_supemon[0].hp, one.choosen_supemon[0].level);
    printf("ATCK: %hd     DEF: %hd\n",one.choosen_supemon[0].attack, one.choosen_supemon[0].defense);
    printf("ACC: %hd     EVA: %f\n",one.choosen_supemon[0].accuracy, one.choosen_supemon[0].evasion);
    printf("====================================\n");


}

void display_choice(){
    short choice;
    printf("+--------------------------------+\n");
    printf("|       Select an action  :      |\n");
    printf("|                                |\n");
    printf("|    1 - Show my supemon moves   |\n");
    printf("|    2 - Use an item             |\n");
    printf("|    3 - Try capture             |\n");
    printf("|    4 - change supemon          |\n");
    printf("|    5 - Run away                |\n");
    printf("+--------------------------------+\n");
    printf("1,2,3,4 or 5 : ");

    scanf(" %hd",&choice);
    switch(choice){
    case 1:
        break;
    case 2:
        select_items();
        break;
    case 3:
        break;
    case 4:
        break;
    case 5:
        break;
    }
}

void select_items() {
    short select_item;
    short decision;
    show_inventory();

    printf("\nEnter the ID of the item you want to use: ");
    scanf(" %hd", &select_item);

    select_item--;

    if (select_item < 0 || select_item >= one.item_count) {
        printf("Invalid item ID!\n");
        return;
    }

    printf("You choose a %s. Are you sure you want to use it? (1 = YES, 2 = NO):", one.item_list[select_item].name);

    scanf(" %hd", &decision);

    if (decision == 1) {

        one.choosen_supemon[0].hp += one.item_list[select_item].hp;
        remove_item(select_item);
    }
}

