#ifndef MOBILES_H_INCLUDED
#define MOBILES_H_INCLUDED


#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <windows.h>
#include <time.h>

char array[25] = {'\0'};
int bill=1;
struct mobile
{
    char name[20];
    char brand[10];
    char os[10];
    char version[5];
    float price;
    char camera[5];
    int item;
    struct mobile* next;
};

typedef struct mobile MOBILE;

struct access
{
    char name[20];
    float price;
    int item;
    struct access* next;

};

typedef struct access ACCESS;

struct customer
{
    char name[30];
    float price;
    struct customer* next;
};

typedef struct customer CUST;


struct queue
{
    char name[20];
    float price;
    struct queue* next;
};

typedef struct queue QUEUE;


struct charger
{
    char model[20];
    float price;
    int item;
    struct charger* next;
};

typedef struct charger CHA;

struct search_mobile
{
    char name[20];
    char version[20];
    float price;
    struct search_mobile* next;
};
typedef struct search_mobile SEARCH;

int ct_m=0;
int ct_a=0;

void selec(MOBILE *,CUST *,ACCESS *,QUEUE *);
MOBILE* getdata();
void spot(MOBILE *,CUST *,ACCESS *,QUEUE *);
void online(MOBILE *,CUST *,ACCESS *,QUEUE *);
void sales(MOBILE *,CUST *,ACCESS *,QUEUE *);
void servic(ACCESS *,CUST *,MOBILE *,QUEUE *);
ACCESS* getacc();
void buy(CUST *,MOBILE *,ACCESS *,QUEUE *);
int disc();
int dis(int );
int find_m(char m[4]);
void timendate(char *);
void rtrn();
void prnt(int );
QUEUE* on_sales(MOBILE *,CUST *,ACCESS *,QUEUE *);
QUEUE* on_servic(ACCESS *,CUST *,MOBILE *,QUEUE *);
void on_buy(QUEUE *);
CHA* getchr();
int toupper();
int cont(CUST *);
CUST* discard(CUST *,int );
VOID search_m(char *,MOBILE *,ACCESS *);
SEARCH* insert_mobile(char name[20],float ,SEARCH *);
void export(MOBILE *,ACCESS *);
void printpath(int d[],int p[],int ,int ,int );
void dijkstras(int n,int cost[10][10],int source,int dest,int d[],int p[]);
void import(MOBILE *,ACCESS *);

int i,j,a[30];

int d[5][5]={{0,450,300,800,600},{450,0,650,300,9999},{300,650,0,9999,550},{800,300,9999,0,250},{600,9999,550,250,0}};
#endif // MOBILES_H_INCLUDED


