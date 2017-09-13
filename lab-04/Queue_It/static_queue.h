#ifndef STATIC_QUEUE_H_INCLUDED
#define STATIC_QUEUE_H_INCLUDED

#include<stdio.h>
#include<stdlib.h>
#define MAXQUEUE 100
#define TRUE 1
#define FALSE 0

struct static_queue
{
    int items[MAXQUEUE];
    int front;
    int rear;
};
typedef struct static_queue SQUEUE;

int full (SQUEUE *);
int empty (SQUEUE *);
void Enqueue (SQUEUE *, int, int *);
void Dequeue (SQUEUE *, int *, int *);
void display(SQUEUE *);

#endif // STATIC_QUEUE_H_INCLUDED
