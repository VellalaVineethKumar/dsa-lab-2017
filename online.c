#include "mobiles.h"


///Function Name : on_sales
///Description : Function Provides different types of searches of mobiles and you can order the mobiles
///Input Params : start,cust,acc,wake
///Return : updated wake


QUEUE* on_sales(MOBILE* start,CUST* cust,ACCESS* acc,QUEUE* wake)
{
    int choice=0,op=0,order=0;

    system("cls");
    printf("-------------------------------------------------------------------\n");
    printf("                       WELCOME TO SALES SECTION                    \n");
    printf("-------------------------------------------------------------------\n");
    printf("On what basis you want to search\n\n");

    printf("1-> BRAND\n");
    printf("2-> OS\n");
    printf("3-> PRICE\n");
    printf("4-> Exit\n\n");

    scanf("%d",&choice);

    if(choice==1)
    {
        system("cls");
        printf("NOKIA\nSONY\nSAMSUNG\nHTC\n\n");
        MOBILE* temp;
        temp=start;
        char brand[20];
        int i=1;

        printf("Enter Brand Name\n");

        scanf("%s",brand);

        system("cls");

        while(temp!=NULL)
        {
            if(strcmp(temp->brand,brand)==0)
            {
                printf("\noption :%d\n\nNAME   :%s %s\nOS     :%s %s\nCAMERA :%sMP\nPRICE  :%fRs\n\n",i,temp->brand,temp->name,temp->os,temp->version,temp->camera,temp->price);

            }
            temp=temp->next;
            i++;

        }
        printf("Enter any key to cntinue...\n\n");
        getch();
    }

    else if(choice==2)
    {
        system("cls");
        printf("\nANDROID\nIOS\nJAVA\nWINDOWS\n\n");

        MOBILE* temp;
        temp=start;
        char os[10];
        int i=1;

        printf("Enter Brand Name\n");
        scanf("%s",os);

        system("cls");

        while(temp!=NULL)
        {
            if(strcmp(temp->os,os)==0)
            {
                printf("\noption :%d\n\nNAME   :%s %s\nOS     :%s %s\nCAMERA :%sMP\nPRICE  :%fRs\n\n",i,temp->brand,temp->name,temp->os,temp->version,temp->camera,temp->price);

            }
            temp=temp->next;
            i++;

        }
        printf("Enter any key to cntinue...\n\n");
        getch();
    }


    else if(choice==3)
    {
        int low=0,high=0;

        system("cls");
        printf("1000-9999\n");
        printf("10000-19999\n");
        printf("20000-29999\n");
        printf("30000-39999\n");
        printf("40000-49999\n\n");

        printf("Enter lower range\n");
        scanf("%d",&low);

        printf("Enter higher range\n");
        scanf("%d",&high);

        MOBILE* temp;
        temp=start;

        int i=1;
        system("cls");

        while(temp!=NULL)
        {
            if(temp->price>=low&&temp->price<=high)
            {
                printf("\noption :%d\n\nNAME   :%s %s\nOS     :%s %s\nCAMERA :%sMP\nPRICE  :%fRs\n\n",i,temp->brand,temp->name,temp->os,temp->version,temp->camera,temp->price);

            }
            temp=temp->next;
            i++;

        }
        printf("Enter any key to cntinue...\n\n");
        getch();
    }

    else
    {
        online(start,cust,acc,wake);
    }


    printf("Option Please!!!\n");
    scanf("%d",&op);

    if(op<=0||op>30)
    {
        printf("Invalid Option\n\n");
        getch();
        online(start,cust,acc,wake);

    }

    system("cls");
    printf("Confirm Your Order!!!\n\n");

    MOBILE* temp;
    temp=start;
    int i=1;
    while(temp!=NULL)
    {
        if(i==op)
        {
            printf("%s %s\n",temp->brand,temp->name);
            if(temp->item==0)
                {
                    printf("There is No stack for this Model\n");
                    printf("Please Import the Model\n");
                    selec(start,cust,acc,wake);
                }

        }
        temp=temp->next;
        i++;
    }


    printf("\n1->YES\n2->NO\n");
    scanf("%d",&order);


    if(order==1)
    {
        MOBILE* temp;
        QUEUE* now;
        now=wake;
        int i;
        temp=start;

        i=1;
        while(temp!=NULL)
        {
            if(i==op)
            {

                if(now==NULL)
                {
                    now=(QUEUE*)malloc(sizeof(QUEUE));
                    strcpy(now->name,temp->name);
                    now->price=temp->price;
                    now->next=NULL;
                    wake=now;
                }
                else
                {
                    while(now->next!=NULL)
                        now=now->next;
                    now->next=(QUEUE*)malloc(sizeof(QUEUE));
                    strcpy(now->next->name,temp->name);
                    now->next->price=temp->price;
                    now->next->next=NULL;
                }
                temp->item--;
            }
            temp=temp->next;
            i++;
        }
    }

    else
    {
        online(start,cust,acc,wake);
    }

    printf("Your Order is in Queue\n\n");
    printf("Enter Any key to Continue\n");
    getch();

    int other=0;

    system("cls");

    printf("Anything Else Sir/Madam....\n");
    printf("1->YES\n2->NO\n");
    scanf("%d",&other);
    if(other==1)
        online(start,cust,acc,wake);

    return wake;

}




///Function Name : on_servic
///Description : Function provides defferent accessoies and ypu can order the accessories
///Input Params : acc,cust,start,wake
///Return : updated wake



QUEUE* on_servic(ACCESS* acc,CUST* cust,MOBILE* start,QUEUE* wake)
{
    char item[20];
    system("cls");
    printf("-------------------------------------------------------------------------\n");
    printf("                       WELCOME TO ACCESSORIES SECTION                    \n");
    printf("-------------------------------------------------------------------------\n");

    printf("\nCABEL\nSPEAKERS\nSTYLUS\nHEADPHONES\nCARDREADER\nCHARGER\n\n");

    printf("Enter the Item\n");
    scanf("%s",item);

    ACCESS* temp=NULL;
    temp=acc;
    int i=1;

    CHA* charg=NULL;
    charg=getchr();
    if(strcmpi(item,"CHARGER")==0)
    {
        system("cls");

        CHA* temp=NULL;
        temp=charg;
        char model[20];
        printf("\nSAMSUNG_CHARGER\nNOKIA_CHARGER\nSONY_CHARGER\nHTC_CHARGER\nAPPLE_CHARGER\n\n");
        printf("Enter The Model\n");
        scanf("%s",model);


        while(temp!=NULL)
        {
            if(strcmpi(temp->model,model)==0)
            {
                printf("Option :%d\nName  : %s\nPrice : %f\n\n",i,temp->model,temp->price);
                if(temp->item==0)
                    {
                        printf("There is No stack for this charger\n");
                        printf("Please Import this Model\n");
                        selec(start,cust,acc,wake);
                    }


                printf("Enter any Key to Continue...\n\n");
                getch();

                int cho=0,op=0;
                printf("Option Please!!!\n");
                scanf("%d",&op);

                if(op<=0||op>5)
                {
                    printf("Invalid Option\n\n");
                    getch();
                    online(start,cust,acc,wake);
                }

                system("cls");
                printf("\nDo you want to buy it???\n");

                i=1;
                CHA* cur;
                cur=charg;

                while(cur!=NULL)
                {
                    if(i==op)
                        printf("%s\n\n",cur->model);
                    i++;
                    cur=cur->next;
                }

                printf("1->YES\n2->NO\n");

                scanf("%d",&cho);

                if(cho==1)
                {
                    CHA* temp;
                    QUEUE* now;
                    int i;
                    temp=charg;
                    now=wake;

                    i=1;
                    while(temp!=NULL)
                    {
                        if(i==op)
                        {
                            if(now==NULL)
                            {
                                now=(QUEUE*)malloc(sizeof(QUEUE));
                                strcpy(now->name,temp->model);
                                now->price=temp->price;
                                now->next=NULL;
                                wake=now;
                            }
                            else
                            {
                                while(now->next!=NULL)
                                    now=now->next;
                                now->next=(QUEUE*)malloc(sizeof(QUEUE));
                                strcpy(now->next->name,temp->model);
                                now->next->price=temp->price;
                                now->next->next=NULL;
                            }
                            temp->item--;
                        }
                        temp=temp->next;
                        i++;
                    }

                    system("cls");
                    printf("Your order is in queue\n\n");
                    printf("Enter Any key to Continue...");
                    getch();
                }

                else
                {
                    online(start,cust,acc,wake);
                }
                int other=0;

                system("cls");
                printf("Anything Else Sir/Madam....\n");
                printf("1->YES\n2->NO\n");
                scanf("%d",&other);
                if(other==1)
                    online(start,cust,acc,wake);



            }


            temp=temp->next;
            i++;

        }


    }


    else
    {
        system("cls");

        while(temp!=NULL)
        {
            if(strcmpi(temp->name,item)==0)
            {
                printf("Option :%d\nName  : %s\nPrice : %f\n\n",i,temp->name,temp->price);
                if(temp->item==0)
                    {
                        printf("There is No stack for this charger\n");
                        printf("Please Import this Model\n");
                        selec(start,cust,acc,wake);
                    }


                printf("Enter any Key to Continue...\n\n");
                getch();

                int cho=0,op=0;
                printf("Option Please!!!\n");
                scanf("%d",&op);

                if(op<=0||op>6)
                {
                    printf("Invalid Option\n\n");
                    getch();
                    online(start,cust,acc,wake);
                }

                system("cls");
                printf("\nDo you want to buy it???\n");

                i=1;
                ACCESS* cur;
                cur=acc;

                while(cur!=NULL)
                {
                    if(i==op)
                        printf("%s\n\n",cur->name);
                    i++;
                    cur=cur->next;
                }

                printf("1->YES\n2->NO\n");

                scanf("%d",&cho);

                if(cho==1)
                {
                    ACCESS* temp;
                    QUEUE* now;
                    int i;
                    temp=acc;
                    now=wake;

                    i=1;
                    while(temp!=NULL)
                    {
                        if(i==op)
                        {
                            if(now==NULL)
                            {
                                now=(QUEUE*)malloc(sizeof(QUEUE));
                                strcpy(now->name,temp->name);
                                now->price=temp->price;
                                now->next=NULL;
                                wake=now;
                            }
                            else
                            {
                                while(now->next!=NULL)
                                    now=now->next;
                                now->next=(QUEUE*)malloc(sizeof(QUEUE));
                                strcpy(now->next->name,temp->name);
                                now->next->price=temp->price;
                                now->next->next=NULL;
                            }
                            temp->item--;
                        }
                        temp=temp->next;
                        i++;
                    }

                    system("cls");
                    printf("Your order is in queue\n\n");
                    printf("Enter Any key to Continue...");
                    getch();
                }

                else
                {
                    online(start,cust,acc,wake);
                }
                int other=0;

                system("cls");
                printf("Anything Else Sir/Madam....\n");
                printf("1->YES\n2->NO\n");
                scanf("%d",&other);
                if(other==1)
                    online(start,cust,acc,wake);



            }


            temp=temp->next;
            i++;

        }
    }
    return wake;

}



///Function Name : display
///Description : function provides the display of Ordered items
///Input Params : wake
///Return : void


void display(QUEUE* wake)
{
    QUEUE* temp;
    temp=wake;
    int i=1;

    system("cls");
    if(temp==NULL)
    {
        printf("There are No Items\n\n");


    }
    else
    {
        while(temp!=NULL)
        {
            printf("%d\nName  : %s\nPrice : %f\n\n",i,temp->name,temp->price);
            i++;
            temp=temp->next;
        }
    }

    printf("Enter any key to Continue\n");
    getch();

}



///Function Name : serve
///Description : Function provides the serving of queued items
///Input Params : wake
///Return : updated wake


QUEUE* serve(QUEUE* wake)
{
    QUEUE* temp;
    temp=wake;

    if(temp==NULL)
    {
        printf("There are no items to be Served\n\n");
        printf("\n\nEnter any key to Continue\n");
        getch();
    }
    else
    {
        wake=wake->next;
        temp->next=NULL;
        on_buy(temp);
        free(temp);
    }

    return wake;

}



///Function Name : on_buy
///Description : Function accepts the information of user and generates the Bill
///Input Params : cust
///Return : void


void on_buy(QUEUE* cust)
{
    float total_bill[30],tot_bill=0;
    int discount[30],i=0;
    char name[20],number[11];
    system("cls");
    printf("Enter Your Name\n");
    scanf("%s",name);
    printf("\nEnter your contact Number\n");
    scanf("%s",number);
    system("cls");
    QUEUE* curr;
    curr=cust;
    while(curr!=NULL)
    {
        discount[i]=disc();
        total_bill[i]=curr->price-(discount[i]*curr->price/100);
        curr=curr->next;
        i++;
    }

    QUEUE* cur;
    cur=cust;
    int k=0;

    while(cur!=NULL)
    {
        k++;
        cur=cur->next;
    }
    rtrn();

    printf("------------------------------------------------------------------------------\n");
    printf("                                SAI MOBILES                                   \n");
    printf("------------------------------------------------------------------------------\n");
    printf("BILL NO              : %d                                              \n\n",bill);
    printf("NAME                 : %s                                              \n\n",name);
    printf("Contact Number       : %s                                            \n\n",number);
    printf("Total Items Purchased: %d                                                 \n\n",k);
    curr=cust;
    i=0;
    while(curr!=NULL)
    {
        printf("NAME                 : %s                                   \n\n",curr->name);
        printf("Price                : %f                                  \n\n",curr->price);
        printf("Discount             : %d %%                               \n\n",discount[i]);
        printf("Bill                 : %f                                \n\n",total_bill[i]);
        tot_bill=tot_bill+total_bill[i];
        curr=curr->next;
        i++;
    }
    printf("==============================================================================\n");
    printf("TOTAL BILL           : %f                                          \n\n",tot_bill);
    printf("==============================================================================\n");

    bill++;
    MessageBox(0, "We Are Happy to Serve You!!\nYour item Will Reach you Within 8 days!!!\n\n", "SAI MOBILES", MB_OK);
    printf("\a\a");
    MessageBox(0, "Thank You!! VISIT AGAIN!!!", "SAI MOBILES", MB_OK);
    cust=NULL;
    printf("Enter Ant Key to Continue....\n");
    getch();
}
