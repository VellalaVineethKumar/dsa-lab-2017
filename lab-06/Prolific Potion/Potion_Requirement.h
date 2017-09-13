#ifndef POTION_REQUIREMENT_H_INCLUDED
#define POTION_REQUIREMENT_H_INCLUDED

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct prolific_potion
{
    char ingredient[30];
    int quantity;
    struct prolific_potion * prev;
    struct prolific_potion * next;
};

typedef struct prolific_potion PP;

PP * gather_ingredients(PP *);
void brew(PP *);

#endif // POTION_REQUIREMENT_H_INCLUDED
