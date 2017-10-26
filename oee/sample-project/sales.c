#include "mobiles.h"
#include "dis.c"



///Function Name : getdata
///Description : Dynamic Intialization of Mobiles
///Input Params : nill
///Return : Starting address of List


MOBILE* getdata()
{
    MOBILE* new1;
    new1=(MOBILE*)malloc(sizeof(MOBILE));
    new1->next=NULL;

    strcpy(new1->name,"LUMIA 1020");
    strcpy(new1->brand,"NOKIA");
    strcpy(new1->os,"WINDOWS");
    strcpy(new1->version,"8");
    new1->price=49999;
    strcpy(new1->camera,"41");
    new1->item=10;

    MOBILE* new2;
    new2=(MOBILE*)malloc(sizeof(MOBILE));
    new2->next=NULL;
    new1->next=new2;

    strcpy(new2->name,"LUMIA 520");
    strcpy(new2->brand,"NOKIA");
    strcpy(new2->os,"WINDOWS");
    strcpy(new2->version,"8");
    new2->price=7929;
    strcpy(new2->camera,"5");
    new2->item=10;

    MOBILE* new3;
    new3=(MOBILE*)malloc(sizeof(MOBILE));
    new3->next=NULL;
    new2->next=new3;

    strcpy(new3->name,"LUMIA 720");
    strcpy(new3->brand,"NOKIA");
    strcpy(new3->os,"WINDOWS");
    strcpy(new3->version,"8");
    new3->price=16500;
    strcpy(new3->camera,"6.7");
    new3->item=10;


    MOBILE* new4;
    new4=(MOBILE*)malloc(sizeof(MOBILE));
    new4->next=NULL;
    new3->next=new4;

    strcpy(new4->name,"ASHA 206");
    strcpy(new4->brand,"NOKIA");
    strcpy(new4->os,"JAVA");
    strcpy(new4->version,"0");
    new4->price=3649;
    strcpy(new4->camera,"1.3");
    new4->item=10;


    MOBILE* new5;
    new5=(MOBILE*)malloc(sizeof(MOBILE));
    new5->next=NULL;
    new4->next=new5;

    strcpy(new5->name,"LUMIA 620");
    strcpy(new5->brand,"NOKIA");
    strcpy(new5->os,"WINDOWS");
    strcpy(new5->version,"8");
    new5->price=13999;
    strcpy(new5->camera,"5");
    new5->item=10;


    MOBILE* new6;
    new6=(MOBILE*)malloc(sizeof(MOBILE));
    new6->next=NULL;
    new5->next=new6;

    strcpy(new6->name,"XPERIA Z");
    strcpy(new6->brand,"SONY");
    strcpy(new6->os,"ANDROID");
    strcpy(new6->version,"4.1");
    new6->price=30740;
    strcpy(new6->camera,"13");
    new6->item=10;


    MOBILE* new7;
    new7=(MOBILE*)malloc(sizeof(MOBILE));
    new7->next=NULL;
    new6->next=new7;

    strcpy(new7->name,"XPERIA SP");
    strcpy(new7->brand,"SONY");
    strcpy(new7->os,"ANDROID");
    strcpy(new7->version,"4.1");
    new7->price=20999;
    strcpy(new7->camera,"8");
    new7->item=10;


    MOBILE* new8;
    new8=(MOBILE*)malloc(sizeof(MOBILE));
    new8->next=NULL;
    new7->next=new8;

    strcpy(new8->name,"XPERIA L");
    strcpy(new8->brand,"SONY");
    strcpy(new8->os,"ANDROID");
    strcpy(new8->version,"4.1");
    new8->price=15199;
    strcpy(new8->camera,"8");
    new8->item=10;


    MOBILE* new9;
    new9=(MOBILE*)malloc(sizeof(MOBILE));
    new9->next=NULL;
    new8->next=new9;

    strcpy(new9->name,"XPERIA U");
    strcpy(new9->brand,"SONY");
    strcpy(new9->os,"ANDROID");
    strcpy(new9->version,"2.3");
    new9->price=11999;
    strcpy(new9->camera,"5");
    new9->item=10;


    MOBILE* new10;
    new10=(MOBILE*)malloc(sizeof(MOBILE));
    new10->next=NULL;
    new9->next=new10;

    strcpy(new10->name,"XPERIA ZR");
    strcpy(new10->brand,"SONY");
    strcpy(new10->os,"ANDROID");
    strcpy(new10->version,"4.1");
    new10->price=27499;
    strcpy(new10->camera,"13");
    new10->item=10;


    MOBILE* new11;
    new11=(MOBILE*)malloc(sizeof(MOBILE));
    new11->next=NULL;
    new10->next=new11;

    strcpy(new11->name,"XPERIA J");
    strcpy(new11->brand,"SONY");
    strcpy(new11->os,"ANDROID");
    strcpy(new11->version,"4,0");
    new11->price=15490;
    strcpy(new11->camera,"5");
    new11->item=10;


    MOBILE* new12;
    new12=(MOBILE*)malloc(sizeof(MOBILE));
    new12->next=NULL;
    new11->next=new12;

    strcpy(new12->name,"XPERIA MIRO");
    strcpy(new12->brand,"SONY");
    strcpy(new12->os,"ANDROID");
    strcpy(new12->version,"4.0");
    new12->price=12600;
    strcpy(new12->camera,"5");
    new12->item=10;


    MOBILE* new13;
    new13=(MOBILE*)malloc(sizeof(MOBILE));
    new13->next=NULL;
    new12->next=new13;

    strcpy(new13->name,"GALAXY S DUOS");
    strcpy(new13->brand,"SAMSUNG");
    strcpy(new13->os,"ANDROID");
    strcpy(new13->version,"4.0");
    new13->price=9349;
    strcpy(new13->camera,"5");
    new13->item=10;


    MOBILE* new14;
    new14=(MOBILE*)malloc(sizeof(MOBILE));
    new14->next=NULL;
    new13->next=new14;

    strcpy(new14->name,"GALAXY GRAND");
    strcpy(new14->brand,"SAMSUNG");
    strcpy(new14->os,"ANDROID");
    strcpy(new14->version,"4.1");
    new14->price=18499;
    strcpy(new14->camera,"8");
    new14->item=10;


    MOBILE* new15;
    new15=(MOBILE*)malloc(sizeof(MOBILE));
    new15->next=NULL;
    new14->next=new15;

    strcpy(new15->name,"GALAXY ACE");
    strcpy(new15->brand,"SAMSUNG");
    strcpy(new15->os,"ANDROID");
    strcpy(new15->version,"2.3");
    new15->price=12999;
    strcpy(new15->camera,"5");
    new15->item=10;


    MOBILE* new16;
    new16=(MOBILE*)malloc(sizeof(MOBILE));
    new16->next=NULL;
    new15->next=new16;

    strcpy(new16->name,"GALAXY Y");
    strcpy(new16->brand,"SAMSUNG");
    strcpy(new16->os,"ANDROID");
    strcpy(new16->version,"2.3");
    new16->price=6270;
    strcpy(new16->camera,"2");
    new16->item=10;


    MOBILE* new17;
    new17=(MOBILE*)malloc(sizeof(MOBILE));
    new17->next=NULL;
    new16->next=new17;

    strcpy(new17->name,"GALAXY S3");
    strcpy(new17->brand,"SAMSUNG");
    strcpy(new17->os,"ANDROID");
    strcpy(new17->version,"4.0");
    new17->price=26399;
    strcpy(new17->camera,"8");
    new17->item=10;


    MOBILE* new18;
    new18=(MOBILE*)malloc(sizeof(MOBILE));
    new18->next=NULL;
    new17->next=new18;

    strcpy(new18->name,"GALAXY NOTE2");
    strcpy(new18->brand,"SAMSUNG");
    strcpy(new18->os,"ANDROID");
    strcpy(new18->version,"4.1");
    new18->price=29950;
    strcpy(new18->camera,"8");
    new18->item=10;


    MOBILE* new19;
    new19=(MOBILE*)malloc(sizeof(MOBILE));
    new19->next=NULL;
    new18->next=new19;

    strcpy(new19->name,"GALAXY S4");
    strcpy(new19->brand,"SAMSUNG");
    strcpy(new19->os,"ANDROID");
    strcpy(new19->version,"4.2");
    new19->price=39999;
    strcpy(new19->camera,"13");
    new19->item=10;


    MOBILE* new20;
    new20=(MOBILE*)malloc(sizeof(MOBILE));
    new20->next=NULL;
    new19->next=new20;

    strcpy(new20->name,"GALAXY METRO DUOS");
    strcpy(new20->brand,"SAMSUNG");
    strcpy(new20->os,"JAVA");
    strcpy(new20->version,"0");
    new20->price=3499;
    strcpy(new20->camera,"2");
    new20->item=10;


    MOBILE* new21;
    new21=(MOBILE*)malloc(sizeof(MOBILE));
    new21->next=NULL;
    new20->next=new21;

    strcpy(new21->name,"GALAXY REX");
    strcpy(new21->brand,"SAMSUNG");
    strcpy(new21->os,"JAVA");
    strcpy(new21->version,"4.0");
    new21->price=3620;
    strcpy(new21->camera,"1.3");
    new21->item=10;


    MOBILE* new22;
    new22=(MOBILE*)malloc(sizeof(MOBILE));
    new22->next=NULL;
    new21->next=new22;

    strcpy(new22->name,"IPHONE 4");
    strcpy(new22->brand,"APPLE");
    strcpy(new22->os,"IOS");
    strcpy(new22->version,"4");
    new22->price=21899;
    strcpy(new22->camera,"5");
    new22->item=10;


    MOBILE* new23;
    new23=(MOBILE*)malloc(sizeof(MOBILE));
    new23->next=NULL;
    new22->next=new23;

    strcpy(new23->name,"IPHONE 4");
    strcpy(new23->brand,"APPLE");
    strcpy(new23->os,"IOS");
    strcpy(new23->version,"6");
    new23->price=41150;
    strcpy(new23->camera,"8");
    new23->item=10;


    MOBILE* new24;
    new24=(MOBILE*)malloc(sizeof(MOBILE));
    new24->next=NULL;
    new23->next=new24;

    strcpy(new24->name,"IPHONE 4S");
    strcpy(new24->brand,"APPLE");
    strcpy(new24->os,"IOS");
    strcpy(new24->version,"4");
    new24->price=35490;
    strcpy(new24->camera,"8");
    new24->item=10;


    MOBILE* new25;
    new25=(MOBILE*)malloc(sizeof(MOBILE));
    new25->next=NULL;
    new24->next=new25;

    strcpy(new25->name,"DESIRE X");
    strcpy(new25->brand,"HTC");
    strcpy(new25->os,"ANDROID");
    strcpy(new25->version,"4.1");
    new25->price=13200;
    strcpy(new25->camera,"5");
    new25->item=10;


    MOBILE* new26;
    new26=(MOBILE*)malloc(sizeof(MOBILE));
    new26->next=NULL;
    new25->next=new26;

    strcpy(new26->name,"DESIRE XC");
    strcpy(new26->brand,"HTC");
    strcpy(new26->os,"ANDROID");
    strcpy(new26->version,"4.1");
    new26->price=18299;
    strcpy(new26->camera,"5");
    new26->item=10;


    MOBILE* new27;
    new27=(MOBILE*)malloc(sizeof(MOBILE));
    new27->next=NULL;
    new26->next=new27;

    strcpy(new27->name,"DESIRE 600");
    strcpy(new27->brand,"HTC");
    strcpy(new27->os,"ANDROID");
    strcpy(new27->version,"4.1");
    new27->price=25999;
    strcpy(new27->camera,"8");
    new27->item=10;


    MOBILE* new28;
    new28=(MOBILE*)malloc(sizeof(MOBILE));
    new28->next=NULL;
    new27->next=new28;

    strcpy(new28->name,"BUTTERFLY X");
    strcpy(new28->brand,"HTC");
    strcpy(new28->os,"ANDROID");
    strcpy(new28->version,"4.1");
    new28->price=35499;
    strcpy(new28->camera,"8");
    new28->item=10;


    MOBILE* new29;
    new29=(MOBILE*)malloc(sizeof(MOBILE));
    new29->next=NULL;
    new28->next=new29;

    strcpy(new29->name,"ONE X");
    strcpy(new29->brand,"HTC");
    strcpy(new29->os,"ANDROID");
    strcpy(new29->version,"4.0");
    new29->price=27999;
    strcpy(new29->camera,"8");
    new29->item=10;


    MOBILE* new30;
    new30=(MOBILE*)malloc(sizeof(MOBILE));
    new30->next=NULL;
    new29->next=new30;

    strcpy(new30->name,"ONE MINI");
    strcpy(new30->brand,"HTC");
    strcpy(new30->os,"ANDROID");
    strcpy(new30->version,"4.1");
    new30->price=35054;
    strcpy(new30->camera,"12");
    new30->item=10;



    return new1;
}
