#ifndef DYNAMIC_QUEUE_H_INCLUDED
#define DYNAMIC_QUEUE_H_INCLUDED

#include<stdio.h>
#include<stdlib.h>

struct dynamic_queue
{
   int data;
   struct dynamic_queue * next;
};
typedef struct dynamic_queue DQUEUE;

DQUEUE * getnode();
void getdata(DQUEUE *);
DQUEUE * insert_at_end(DQUEUE *);
DQUEUE * delete_from_start(DQUEUE *);
void Display(DQUEUE *);

#endif // DYNAMIC_QUEUE_H_INCLUDED
