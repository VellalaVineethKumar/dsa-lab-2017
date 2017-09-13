#ifndef DYNAMIC_STACK_H_INCLUDED
#define DYNAMIC_STACK_H_INCLUDED

#include<stdio.h>
#include<stdlib.h>

struct dynamic_stack
{
   int data;
   struct dynamic_stack * next;
};
typedef struct dynamic_stack DSTACK;

DSTACK * getnode();
void getdata(DSTACK *);
DSTACK * insert_at_start(DSTACK *);
DSTACK * delete_from_start(DSTACK *);
void Display(DSTACK *);

#endif // DYNAMIC_STACK_H_INCLUDED
