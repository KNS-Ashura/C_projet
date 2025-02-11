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
        display_moves();
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
    printf("\n");

    if (decision == 1) {
        if(strcmp(one.item_list[select_item].name, "Rare Candy") == 0){
                printf("you are using a rare candy");
            level_up_with_rare_candy(&one.choosen_supemon[0]);
        }else if(one.choosen_supemon[0].hp + one.item_list[select_item].hp > one.choosen_supemon[0].max_hp){
            one.choosen_supemon[0].hp = one.choosen_supemon[0].max_hp;
        }else{
            one.choosen_supemon[0].hp += one.item_list[select_item].hp;
        }
        remove_item(select_item);
    }
}

void display_moves() {
    short next;

    // Affichage des attaques disponibles
    for (short i = 0; i < one.choosen_supemon[0].count_of_moves; i++) {
        printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
        printf(" %s , damage: %hd, attack_augment: %hd, attack_debuf: %hd \n",
               one.choosen_supemon[0].moves_list[i].name,
               one.choosen_supemon[0].moves_list[i].damage,
               one.choosen_supemon[0].moves_list[i].attack_augment,
               one.choosen_supemon[0].moves_list[i].attack_debuf);

        printf("defense_augment: %hd, defense_debuf: %hd \n",
               one.choosen_supemon[0].moves_list[i].defense_augment,
               one.choosen_supemon[0].moves_list[i].defense_debuf);

        printf("evasion_augment: %hd, evasion_debuf: %hd              ID [%hd]\n",
               one.choosen_supemon[0].moves_list[i].evasion_agment,
               one.choosen_supemon[0].moves_list[i].evasion_debuf, i + 1);

        printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    }

    // Sélection du mouvement
    printf("Enter the ID of the selected move or 4 to leave: ");
    scanf(" %hd", &next);
    next--;

    // Calcul du taux de succès de l'attaque
    float success_rate;
    int total = one.choosen_supemon[0].accuracy + master.spawned_supemon[0].base_evasion;

    // Éviter la division par zéro
    if (total == 0) {
        success_rate = 0.1;  // 10% de réussite minimum si les deux stats sont nulles
    } else {
        success_rate = (float) one.choosen_supemon[0].accuracy / total + 0.1;
    }

    // Vérification si le joueur veut attaquer
    if (next < 4) {
        float damage = (float) one.choosen_supemon[0].moves_list[next].damage *
                       one.choosen_supemon[0].attack / master.spawned_supemon[0].defense;

        // Si l'attaque ne fait pas de dégâts, appliquer directement les effets
        if (one.choosen_supemon[0].moves_list[next].damage == 0) {
            printf("%s uses %s on %s (effect applied, no damage)\n",
                   one.choosen_supemon[0].name,
                   one.choosen_supemon[0].moves_list[next].name,
                   master.spawned_supemon[0].name);

            // Appliquer ici les effets spéciaux de l'attaque
            // Exemple : augmenter attaque, baisser défense, etc.

        } else { // Sinon, vérification de l'esquive
            float random_value = (float) rand() / RAND_MAX; // Nombre entre 0 et 1

            if (success_rate > random_value) {
                master.spawned_supemon[0].hp -= damage;
                printf("%s deals %.2f damage to %s\n",
                       one.choosen_supemon[0].name,
                       damage,
                       master.spawned_supemon[0].name);
            } else {
                printf("%s is dodged by %s\n",
                       one.choosen_supemon[0].moves_list[next].name,
                       master.spawned_supemon[0].name);
            }
        }
    }
}

