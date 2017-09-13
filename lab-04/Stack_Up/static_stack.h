#ifndef STATIC_STACK_H_INCLUDED
#define STATIC_STACK_H_INCLUDED

#include<stdio.h>
#include<stdlib.h>
#define STACKSIZE 100
#define TRUE 1
#define FALSE 0

struct static_stack
{
    int items[STACKSIZE];
    int top;
};
typedef struct static_stack SSTACK;

int full (SSTACK *);
int empty (SSTACK *);
void push (SSTACK *, int, int *);
void pop (SSTACK *, int *, int *);
void peek (SSTACK *, int *, int *);
void display(SSTACK *);

#endif // STATIC_STACK_H_INCLUDED
