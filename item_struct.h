#ifndef ITEM_STRUCT_INCLUDED
#define ITEM_STRUCT_INCLUDED

typedef struct {

    short hp;
    short level;
    char name[20];
    short selling_value;

} item;

void init_all_item();
void init_potion();
void init_super_potion();
void init_rare_candy();


extern item potion;
extern item super_potion;
extern item rare_candy;



#endif // ITEM_STRUCT_H_INCLUDED
