#ifndef CHOCOLATE_H_INCLUDED
#define CHOCOLATE_H_INCLUDED

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct choc_fantasy
{
    char choc_name[20];
    int quantity;
    struct choc_fantasy * prev;
    struct choc_fantasy * next;
};
typedef struct choc_fantasy CF;

CF * gather_requirements(CF *);
void melt_and_prepare(CF *);

#endif // CHOCOLATE_H_INCLUDED
