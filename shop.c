#include <stdio.h>
#include <stdlib.h>
#include "shop.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "shop.h"
#include "player_struct.h"
#include "item_struct.h"

extern player one;

/////////////////MENU DU SHOP////////////////////////
void open_shop() {
    int sell_or_buy;
    printf("+--------------------------------+\n");
    printf("|         Sell or buy  ?         |\n");
    printf("|                                |\n");
    printf("|           1 - Sell             |\n");
    printf("|           2 - Buy              |\n");
    printf("|           3 - Show inventory   |\n");
    printf("|           4 - Exit             |\n");
    printf("|                                |\n");
    printf("+--------------------------------+\n");
    scanf("%d", &sell_or_buy);

    if (sell_or_buy == 1) {
        sell_items();
    } else if (sell_or_buy == 2) {
        buy_items();
    } else if (sell_or_buy == 3) {  // Correction ici
        show_inventory();
    } else {
        printf("Exit\n\n");
    }
}
///////////////////////SELL ITEMS MENU//////////////////////////////////
void sell_items() {
    short select_item;
    short decision;
    show_inventory();

    printf("\nEnter the ID of the item you want to sell: ");
    scanf(" %hd", &select_item);

    select_item--;

    if (select_item < 0 || select_item >= one.item_count) {
        printf("Invalid item ID!\n");
        return;
    }

    printf("You choose a %s. Are you sure you want to sell it for %d supcoins? (1 = YES, 2 = NO):",
           one.item_list[select_item].name,
           one.item_list[select_item].selling_value);

    scanf(" %hd", &decision);

    if (decision == 1) {
        one.supcoin += one.item_list[select_item].selling_value;
        remove_item(select_item);
        printf("Item sold!\n");
    }
}

////////////////////////BUY ITEMS MENU////////////////////////////////////
void buy_items(int *verif2) {

    int item_choice;
    item selected;

    printf("Hey, which item do you want? Here is the list: \n");
    printf("+---------------------------------------------------+\n");
    printf("|                        Items :                    |\n");
    printf("|                                                   |\n");
    printf("|           1 - Potion (100 supcoins)               |\n");
    printf("|           2 - Super Potion (300 supcoins)         |\n");
    printf("|           3 - Rare Candy (700 supcoins)           |\n");
    printf("|                                                   |\n");
    printf("|           4 - Come back to shop                   |\n");
    printf("|           5 - Come back to home                   |\n");
    printf("+---------------------------------------------------+\n");
    printf("Enter your choice: ");

    scanf("%d", &item_choice);

    switch (item_choice) {
        case 1:
            if (one.supcoin >= 100) {
                selected = potion;
                one.supcoin -= 100;
                printf("You bought a potion.\n");
                one.item_list[one.item_count] = selected;
                one.item_count++;
            } else {
                printf("Not enough supcoins!\n");
            }
            break;
        case 2:
            if (one.supcoin >= 300) {
                selected = super_potion;
                one.supcoin -= 300;
                printf("You bought a super potion.\n");
                one.item_list[one.item_count] = selected;
                one.item_count++;
            } else {
                printf("Not enough supcoins!\n");
            }
            break;
        case 3:
            if (one.supcoin >= 700) {
                selected = rare_candy;
                one.supcoin -= 700;
                printf("You bought a rare candy.\n");
                one.item_list[one.item_count] = selected;
                one.item_count++;
            } else {
                printf("Not enough supcoins!\n");
            }
            break;
        case 4:
            open_shop();
            return;
        case 5:
            return;
        default:
            printf("Invalid choice. Try again.\n");
            break;
    }

    open_shop(0);
}
void show_inventory() {
    printf("=========================================================================================================\n");
    printf("you have %hd supcoins\n", one.supcoin);
    printf("your items are :\n\n");

    for(int i = 0; i < one.item_count ; i++) {
            printf("%s - heal_capacity : %d, level-up : %d id : %d\n", one.item_list[i].name, one.item_list[i].hp, one.item_list[i].level,i + 1);
    }

    printf("=========================================================================================================\n");
}

void remove_item(int index) {
    if (index < 0 || index >= one.item_count) {
        printf("Invalid item index.\n");
        return;
    }

    for (int i = index; i < one.item_count - 1; i++) {
        one.item_list[i] = one.item_list[i + 1];
    }

    one.item_count--;
}

void level_up_with_rare_candy(supemon *selected) {
    selected->level++; // Augmente le niveau

    // Augmentation de 30% pour chaque statistique
    double stats[] = {
        selected->max_hp,
        selected->base_attack,
        selected->base_defense,
        selected->base_accuracy,
        selected->speed
    };

    int num_stats = sizeof(stats) / sizeof(stats[0]);

    for (int i = 0; i < num_stats; i++) {
        double new_value = stats[i] * 1.3;
        // 50% de chance d'arrondir vers le bas ou vers le haut
        stats[i] = (rand() % 2 == 0) ? floor(new_value) : ceil(new_value);
    }

    // Appliquer les nouvelles valeurs aux bonnes variables
    selected->max_hp = (int)stats[0];
    selected->base_attack = (int)stats[1];
    selected->base_defense = (int)stats[2];
    selected->base_accuracy = (int)stats[3];
    selected->speed = (int)stats[4];

    // Mettre à jour les valeurs dérivées
    selected->hp = selected->max_hp;
    selected->attack = selected->base_attack;
    selected->defense = selected->base_defense;
    selected->accuracy = selected->base_accuracy;
    selected->evasion = selected->base_evasion; // Supposé ne pas changer avec le level-up

    printf("%s leveled up to %d!\n", selected->name, selected->level);
}
