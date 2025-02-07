#include <stdio.h>
#include <stdlib.h>
#include "item_struct.h"

item potion;
item super_potion;
item rare_candy;

void init_all_item(){
    init_potion();
    init_super_potion();
    init_rare_candy();
}

void init_potion() {
    potion.hp = 5;
    potion.level = 0;
    strcpy(potion.name, "Potion");
    potion.selling_value = 50;
}

void init_super_potion() {
    super_potion.hp = 10;  // ✅ Correction ici
    super_potion.level = 0;
    strcpy(super_potion.name, "Super Potion");
    super_potion.selling_value = 150;
}

void init_rare_candy() {
    rare_candy.hp = 10;  // ✅ Correction ici
    rare_candy.level = 0;
    strcpy(rare_candy.name, "Rare Candy");
    rare_candy.selling_value = 350;
}
