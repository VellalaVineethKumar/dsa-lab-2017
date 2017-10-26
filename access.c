#include "mobiles.h"



///Function Name : getacc
///Description : Dynamic Inialization of Accessories
///Input Params : nill
///Return : Startin Address of list


ACCESS* getacc()
{
    ACCESS* new1;
    new1=(ACCESS*)malloc(sizeof(ACCESS));
    new1->next=NULL;


    strcpy(new1->name,"CABEL");
    new1->price=150;
    new1->item=10;


    ACCESS* new2;
    new2=(ACCESS*)malloc(sizeof(ACCESS));
    new2->next=NULL;
    new1->next=new2;

    strcpy(new2->name,"SPEAKERS");
    new2->price=999;
    new2->item=10;


    ACCESS* new3;
    new3=(ACCESS*)malloc(sizeof(ACCESS));
    new3->next=NULL;
    new2->next=new3;

    strcpy(new3->name,"STYLUS");
    new3->price=499;
    new3->item=10;


    ACCESS* new4;
    new4=(ACCESS*)malloc(sizeof(ACCESS));
    new4->next=NULL;
    new3->next=new4;

    strcpy(new4->name,"HEADPHONES");
    new4->price=799;
    new4->item=10;


    ACCESS* new5;
    new5=(ACCESS*)malloc(sizeof(ACCESS));
    new5->next=NULL;
    new4->next=new5;

    strcpy(new5->name,"CARDREADER");
    new5->price=150;
    new5->item=10;


    new5->next=NULL;

    return new1;
}




///Function : getchr
///Description : Dynamic Initilization of Chargers
///Input Params : nill
///Return : Starting Address of List


CHA* getchr()
{
    CHA* new1;
    new1=(CHA*)malloc(sizeof(CHA));
    new1->next=NULL;

    strcpy(new1->model,"SAMSUNG_CHARGER");
    new1->price=249;
    new1->item=10;


    CHA* new2;
    new2=(CHA*)malloc(sizeof(CHA));

    strcpy(new2->model,"NOKIA_CHARGER");
    new2->price=250;
    new2->item=10;
    new1->next=new2;


    CHA* new3;
    new3=(CHA*)malloc(sizeof(CHA));

    strcpy(new3->model,"SONY_CHARGER");
    new3->price=225;
    new3->item=10;
    new2->next=new3;

    CHA* new4;
    new4=(CHA*)malloc(sizeof(CHA));

    strcpy(new4->model,"HTC_CHARGER");
    new4->price=199;
    new4->item=10;
    new3->next=new4;

    CHA* new5;
    new5=(CHA*)malloc(sizeof(CHA));

    strcpy(new5->model,"APPLE_CHARGER");
    new5->price=299;
    new5->item=10;
    new4->next=new5;

    new5->next=NULL;

    return new1;


}
