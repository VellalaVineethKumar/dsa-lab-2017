#include "mobiles.h"



///Function Name : timendate
///Description : finds the month
///Input Params : string m
///Return : void


void timendate(char* m)
{
    char month[30];
    int i=0,j=0;
    time_t result;
    result = time(NULL);

    strcpy(month,asctime(localtime(&result)));
    i=4;
    while(i<7)
    {
        m[j]=month[i];
        i++;
        j++;
    }
    m[j]='\0';


}



///function name:find_m
///description:finds which month the customer has booked/vacated the room
///Input Params :string m
///Return : month number


int find_m(char m[4])
{
    int r;

    if(strcmp(m,"Jan")==0)
        r=1;
    else if(strcmp(m,"Feb")==0)
        r=2;
    else if(strcmp(m,"Mar")==0)
        r=3;
    else if(strcmp(m,"Apr")==0)
        r=4;
    else if(strcmp(m,"May")==0)
        r=5;
    else if(strcmp(m,"Jun")==0)
        r=6;
    else if(strcmp(m,"Jul")==0)
        r=7;
    else if(strcmp(m,"Aug")==0)
        r=8;
    else if(strcmp(m,"Sep")==0)
        r=9;
    else if(strcmp(m,"Oct")==0)
        r=10;
    else if(strcmp(m,"Nov")==0)
        r=11;
    else if(strcmp(m,"Dec")==0)
        r=12;

    return r;
}



///Function Name : dis
///Description : returns the disscount amount which is already defined as per the month of booking.
///Input Params :month number
///Return : Percentage of discount

int dis(int m)
{
    switch(m)
    {
    case 1:
        return 9;

    case 2:
        return 4;

    case 3:
        return 8;

    case 4:
        return 5;

    case 5:
        return 6;

    case 6:
        return 6;

    case 7:
        return 0;

    case 8:
        return 3;

    case 9:
        return 7;

    case 10:
        return 10;

    case 11:
        return 12;

    case 12:
        return 8;
    }
    return 0;
}



///Function Name : prnt
///Description : prints the offer based on month
///Input Params : month number
///Return : void


void prnt(int m)
{
    switch(m)
    {
    case 1:
        printf("\nNEW YEAR Offer!!!! 9%% discount!!!!\n");
        break;

    case 2:
        printf("\nID-E-MILAD Offer!!!! 4%% discount!!!!\n");
        break;

    case 3:
        printf("\nUGADI Offer!!!! 8%% discount!!!!\n");
        break;

    case 4:
        printf("\nGOOD FRIDAY Offer!!!! 5%% discount!!!!\n");
        break;

    case 5:
        printf("\nSUMMER HOLIDAYS Offer!!!! 6%% discount!!!!\n");
        break;

    case 6:
        printf("\nSUMMER HOLIDAYS Offer!!!! 6%% discount!!!!\n");
        break;

    case 7:
        break;

    case 8:
        printf("\nINDEPENDANCE DAY Offer!!!! 3%% discount!!!!\n");
        break;

    case 9:
        printf("\nGANESHA FESTIVAL Offer!!!! 7%% discount!!!!\n");
        break;

    case 10:
        printf("\nDASARA Offer!!!! 10%% discount!!!!\n");
        break;

    case 11:
        printf("\nDEEPAVALI Offer!!!! 12%% discount!!!!\n");
        break;

    case 12:
        printf("\nCHRISTMAS Offer!!!! 8%% discount!!!!\n");
        break;
    }
}
