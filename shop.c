#include <stdio.h>
#include <stdlib.h>
#include "shop.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "shop.h"
#include "player_struct.h"

extern player one;

/////////////////MENU DU SHOP////////////////////////
void open_shop() {
    int sell_or_buy;
        printf(" Welcome in the shop ! \n");
        printf("+--------------------------------+\n");
        printf("|         Sell or buy  ?         |\n");
        printf("|                                |\n");
        printf("|           1 - Sell             |\n");
        printf("|           2 - Buy              |\n");
        printf("|           3 - Exit             |\n");
        printf("|                                |\n");
        printf("+--------------------------------+\n");
        printf("Enter your choice (1, 2, 3): ");
        scanf("%d", &sell_or_buy);

    if (sell_or_buy == 1) {
        sell_items();
    } else if (sell_or_buy == 2) {
        buy_items();
    } else {
        printf("Exit\n\n");
    }:
}

///////////////////////SELL ITEMS MENU//////////////////////////////////
void sell_items() {
    printf("Voici votre inventaire : \n");
    for (int i = 0; i < 15; i++) {
        if (strlen(one.items_list[i]) > 0) {
            printf("%d - %s\n", i + 1, one.items_list[i]);
        }
    }
    printf("Fonctionnalité à implémenter...\n");
}

////////////////////////BUY ITEMS MENU////////////////////////////////////
void buy_items() {
    int item_choice;
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
                strcpy(one.items_list[0], "Potion");
                one.supcoin -= 100;
                printf("You bought a Potion! Remaining supcoins: %d\n", one.supcoin);
            } else {
                printf("You don't have enough money!\n");
            }
            break;
        case 2:
            if (one.supcoin >= 300) {
                strcpy(one.items_list[1], "Super Potion");
                one.supcoin -= 300;
                printf("You bought a Super Potion! Remaining supcoins: %d\n", one.supcoin);
            } else {
                printf("You don't have enough money!\n");
            }
            break;
        case 3:
            if (one.supcoin >= 700) {
                strcpy(one.items_list[2], "Rare Candy");
                one.supcoin -= 700;
                printf("You bought a Rare Candy! Remaining supcoins: %d\n", one.supcoin);
            } else {
                printf("You don't have enough money!\n");
            }
            break;
        case 4:
            open_shop();
            break;
        case 5:
            printf("Exit\n");
            break;
        default:
            printf("Invalid choice, try again.\n");
            break;
    }
}
