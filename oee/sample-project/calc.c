#include "mobiles.h"
#include "online.c"


///Function Name: selec
///Description : to select spot shopping or online shopping
///Input Parms : start,cust,acc,wake
///Return : void


void selec(MOBILE* start,CUST* cust,ACCESS* acc,QUEUE* wake)
{


    int choice,chh;

    system("cls");
    printf("-------------------------------------------------------------------------\n");
    printf("                          WELCOME TO SAI MOBILES                         \n");
    printf("-------------------------------------------------------------------------\n");
    printf("1-> SALES\n");
    printf("2-> EXPORT\n");
    printf("3-> IMPORT\n");
    printf("4-> Exit\n");
    scanf("%d",&choice);

    switch(choice)
    {


    case 1:system("cls");
           printf("-------------------------------------------------------------------------\n");
           printf("                             WELCOME TO SALES SECTION                    \n");
           printf("-------------------------------------------------------------------------\n");
           printf("1-> SPOT SHOPPING\n");
           printf("2-> ONLINE SHOPPING\n");
           printf("3-> EXIT\n");
           scanf("%d",&chh);
           switch(chh)
           {
               case 1:printf("Entering Spot Shopping!!!!\n");
                      printf("Enter Any Key to Continue....");
                      getch();
                      spot(start,cust,acc,wake);
                      break;
               case 2:printf("Entering Online Shopping!!!!\n");
                      printf("Enter Any Key to Continue...");
                      getch();
                      online(start,cust,acc,wake);
                      break;
               case 3:printf("You Are Exiting The Shopping Now!!!\n");
                      printf("Enter Any Key to Continue....");
                      getch();
                      printf("\a\a");
                      MessageBox(0, "Thank You!!! Visit Again!!", "SAI MOBILES", MB_OK);
                      exit(0);
               default:printf("\a\a");
                       MessageBox(0, "Invalid Choice!!", "SAI MOBILES", MB_OK);
                       break;
        }
        break;

        case 2:export(start,acc);
               break;

        case 3:import(start,acc);
               break;

    }
    selec(start,cust,acc,wake);

}



///Function Name : online
///Description : in online section to select sales or accessories
///Input Parms : start,cust,acc,wake
///Return : void


void online(MOBILE* start,CUST* cust,ACCESS* acc,QUEUE* wake)
{
    while(1)
    {
        int choice=0;
        char key[10];
        system("cls");

        printf("-------------------------------------------------------------------------\n");
        printf("                          WELCOME TO ONLINE SECTION                      \n");
        printf("-------------------------------------------------------------------------\n");

        printf("1-> MOBILES\n");
        printf("2-> ACCESSORIES\n");
        printf("3-> View the Orders\n");
        printf("4-> Serve the Ordered Items\n");
        printf("5-> Search Items by Keyword\n");
        printf("6-> EXIT\n");

        scanf("%d",&choice);

        switch(choice)
        {
        case 1:
            printf("WELCOME TO MOBILES SECTION!!!\n");
            printf("Enter Any Key to Continue....");
            getch();
            wake=on_sales(start,cust,acc,wake);
            break;

        case 2:
            printf("WELCOME TO ACCESSORIES SECTION!!!\n");
            printf("Enter Any Key too Continue....");
            getch();
            wake=on_servic(acc,cust,start,wake);
            break;

        case 3:
            display(wake);
            break;

        case 4:
            wake=serve(wake);
            online(start,cust,acc,wake);
            break;

        case 5:system("cls");
               printf("Enter the keyword to search\n");
               printf("Should be of minimum 2 words\n");
               scanf("%s",key);
               search_m(key,start,acc);
               break;


        case 6:
            printf("You Are Exiting From Online Shopping!!!\n");
            printf("Enter Any Key to Continue....");
            getch();
            MessageBox(0, "Successfully Exited from Online Section", "SAI MOBILES", MB_OK);
            selec(start,cust,acc,wake);
            break;

        default:
            printf("\a\a");
            MessageBox(0, "Invalid Entry", "SAI MOBILES", MB_OK);
            break;

        }
    }

}



///Function Name : spot
///Description : in spot section to select sales or accessories
///Input Params : start,cust,acc,wake
///Return : void


void spot(MOBILE* start,CUST* cust,ACCESS* acc,QUEUE* wake)
{
    while(1)
    {
        int choice=0;
        system("cls");
        printf("-------------------------------------------------------------------------\n");
        printf("                           WELCOME TO SPOT SECTION                       \n");
        printf("-------------------------------------------------------------------------\n");

        printf("1-> MOBILES\n");
        printf("2-> ACCESSORIES\n");
        printf("3-> EXIT\n");

        scanf("%d",&choice);

        switch(choice)
        {
        case 1:
            printf("WELCOME TO MOBILES SECTION!!!\n");
            printf("Enter Any Key to Continue....");
            getch();
            sales(start,cust,acc,wake);
            break;

        case 2:
            printf("WELCOME TO ACCESSORIES SECTION!!!\n");
            printf("Enter Any Key to Continue....");
            getch();
            servic(acc,cust,start,wake);
            break;

        case 3:
            printf("You Are Exiting From Spot Shopping!!!\n");
            printf("Enter Any Key to Continue....");
            getch();
            MessageBox(0, "Successfully Exited from Spot Shopping Section", "SAI MOBILES", MB_OK);
            selec(start,cust,acc,wake);
            break;

        default:
            MessageBox(0, "Invalid Entry", "SAI MOBILES", MB_OK);
            break;

        }
    }
}



///Function Name : sales
///Description : Function Provides different types of searches of mobiles and you can order the mobiles
///Input Params : start,cust,acc,wake
///Return : void


void sales(MOBILE* start,CUST* cust,ACCESS* acc,QUEUE* wake)
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
            if(strcmpi(temp->brand,brand)==0)
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
            if(strcmpi(temp->os,os)==0)
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
        spot(start,cust,acc,wake);
    }


    printf("Option Please!!!\n");
    scanf("%d",&op);
    if(op<=0||op>30)
    {
        printf("Invalid Option\n\n");
        getch();
        spot(start,cust,acc,wake);

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
                        printf("There is No stack for this charger\n");
                        printf("Please Import this Model\n");
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
        CUST* now;
        int i;
        temp=start;

        i=1;
        while(temp!=NULL)
        {
            if(i==op)
            {
                now=cust;
                if(now==NULL)
                {
                    now=(CUST*)malloc(sizeof(CUST));
                    strcpy(now->name,temp->name);
                    now->price=temp->price;
                    now->next=NULL;
                    cust=now;
                }
                else
                {
                    while(now->next!=NULL)
                        now=now->next;
                    now->next=(CUST*)malloc(sizeof(CUST));
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
        spot(start,cust,acc,wake);
    }

    int other=0;

    system("cls");

    printf("Anything Else Sir/Madam....\n");
    printf("1->YES\n2->NO\n");
    scanf("%d",&other);
    if(other==1)
        spot(start,cust,acc,wake);
    else
    {
        buy(cust,start,acc,wake);
    }
}



///Function Name : servic
///Description : Function provides defferent accessoies and ypu can order the accessories
///Input Params : acc,cust,start,wake
///Return : void


void servic(ACCESS* acc,CUST* cust,MOBILE* start,QUEUE* wake)
{
    CHA* charg=NULL;
    charg=getchr();
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

    system("cls");
    if(strcmpi(item,"CHARGER")==0)
    {
        char model[10];

        system("cls");
        printf("\nSAMSUNG_CHARGER\nNOKIA_CHARGER\nSONY_CHARGER\nHTC_CHARGER\nAPPLE_CHARGER\n\n");
        printf("Enter The Model\n");

        scanf("%s",model);

        CHA* temp=NULL;
        temp=charg;
        while(temp!=NULL)
        {

            if(strcmpi(temp->model,model)==0)
            {
                system("cls");
                printf("Option :%d\nName  : %s\nPrice : %f\n\n",i,temp->model,temp->price);
                if(temp->item==0)
                    {
                        printf("There is No stack for this Charger\n");
                        printf("Please Import this Charger\n");
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
                    spot(start,cust,acc,wake);
                }

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
                    CUST* now;
                    int i;
                    temp=charg;

                    i=1;
                    while(temp!=NULL)
                    {
                        if(i==op)
                        {
                            now=cust;
                            if(now==NULL)
                            {
                                now=(CUST*)malloc(sizeof(CUST));
                                strcpy(now->name,temp->model);
                                now->price=temp->price;
                                now->next=NULL;
                                cust=now;
                            }
                            else
                            {
                                while(now->next!=NULL)
                                    now=now->next;
                                now->next=(CUST*)malloc(sizeof(CUST));
                                strcpy(now->next->name,temp->model);
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
                    spot(start,cust,acc,wake);
                }
                int other=0;

                system("cls");
                printf("Anything Else Sir/Madam....\n");
                printf("1->YES\n2->NO\n");
                scanf("%d",&other);
                if(other==1)
                    spot(start,cust,acc,wake);
                else
                {
                    buy(cust,start,acc,wake);
                    cust=NULL;
                }


            }

            temp=temp->next;
            i++;

        }

    }
    else
    {

        while(temp!=NULL)
        {
            if(strcmpi(temp->name,item)==0)
            {
                printf("Option :%d\nName  : %s\nPrice : %f\n\n",i,temp->name,temp->price);
                if(temp->item==0)
                    {
                        printf("There is No stack for this Charger\n");
                        printf("Please Import this Charger\n");
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
                    spot(start,cust,acc,wake);
                }

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
                    CUST* now;
                    int i;
                    temp=acc;

                    i=1;
                    while(temp!=NULL)
                    {
                        if(i==op)
                        {
                            now=cust;
                            if(now==NULL)
                            {
                                now=(CUST*)malloc(sizeof(CUST));
                                strcpy(now->name,temp->name);
                                now->price=temp->price;
                                now->next=NULL;
                                cust=now;
                            }
                            else
                            {
                                while(now->next!=NULL)
                                    now=now->next;
                                now->next=(CUST*)malloc(sizeof(CUST));
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
                    spot(start,cust,acc,wake);
                }
                int other=0;

                system("cls");
                printf("Anything Else Sir/Madam....\n");
                printf("1->YES\n2->NO\n");
                scanf("%d",&other);
                if(other==1)
                    spot(start,cust,acc,wake);
                else
                {
                    buy(cust,start,acc,wake);
                    cust=NULL;
                }


            }

            temp=temp->next;
            i++;

        }

    }

}




///Function Name : buy
///Description : Function provides you the options for further orders or discarding the prev orders or completion of order
///Input Params : cust,start,acc,wake
///Return : void



void buy(CUST* cust,MOBILE* start,ACCESS* acc,QUEUE* wake)
{
    int pq=0;

    system("cls");
    printf("Your Orders Are....\n\n");
    CUST* ord;
    ord=cust;
    int o=1;
    while(ord!=NULL)
    {
        printf("%d\nName : %s\nPrice: %f\n\n",o,ord->name,ord->price);
        ord=ord->next;
        o++;

    }
    printf("1->Add More items to the Order\n");
    printf("2->Discard Any of Items in Order\n");
    printf("3->Complete the Order\n");

    int choo=0,opn=0;
    scanf("%d",&choo);
    switch(choo)
    {

    case 1:
        spot(start,cust,acc,wake);
        break;
    case 2:
        printf("Enter the Option of item to be Discarded\n");
        scanf("%d",&opn);
        cust=discard(cust,opn);
        buy(cust,start,acc,wake);
    case 3:pq=cont(cust);
           if(pq==1)
           {
               spot(start,cust,acc,wake);
           }
           break;
    }
}


///Function Name : cont
///Description : Function provides you Completion of Orders and Generation of bill
///Input Params : cust
///Return : void


int cont(CUST* cust)
{
    float total_bill[30],tot_bill=0;
    int discount[30],i=0;
    char name[20],number[11];
    system("cls");
    CUST* pur;
    pur=cust;
    if(pur==NULL)
    {
        printf("You Didn't Buy Any Items\n\n");
        printf("Please Buy Anything..!!!\nDon't Miss the Offers...!!!\n\n");
        getch();
        return 1;

    }
    else
    {
        system("cls");
        printf("Enter Your Name\n");
        scanf("%s",name);
        printf("\nEnter your contact Number\n");
        scanf("%s",number);
        system("cls");
        CUST* curr;
        curr=cust;
        while(curr!=NULL)
        {
            discount[i]=disc();
            total_bill[i]=curr->price-(discount[i]*curr->price/100);
            curr=curr->next;
            i++;
        }

        CUST* cur;
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
            printf("Discount             : %d  %%                              \n\n",discount[i]);
            printf("Bill                 : %f                                \n\n",total_bill[i]);
            tot_bill=tot_bill+total_bill[i];
            curr=curr->next;
            i++;
        }
        printf("==============================================================================\n");
        printf("TOTAL BILL           : %f                                          \n\n",tot_bill);
        printf("==============================================================================\n");

        bill++;
        cust=NULL;
        printf("Enter Ant Key to Continue....\n");
        getch();
        printf("\a\a");
        MessageBox(0, "Thank You!! VISIT AGAIN!!!", "SAI MOBILES", MB_OK);

        return 0;
    }

}




///Function Name : disc
///Description : function to compute discount by finding the date and month
///Input Params : nill
///Return : discount percentage


int disc()
{
    char m[4];
    int mm=0,discount=0;
    timendate(m);
    mm=find_m(m);
    discount=dis(mm);
    return discount;

}



///Function Name : rtrn
///Description : functiom to find month
///Input Params : nill
///Return : void


void rtrn()
{
    char m[4];
    int mm=0;
    timendate(m);
    mm=find_m(m);
    prnt(mm);
}



///Function Name : discard
///Description : Function provides you to discard the previous orders
///Input Params : cust,opn
///return : updated cust


CUST* discard(CUST* cust,int opn)
{
    int i=1;
    CUST* temp=NULL;
    CUST* pre=NULL;
    temp=cust;
    pre=NULL;
    if(opn==1)
    {
        cust=temp->next;
    }
    else
    {

        while(i!=opn)
        {
            pre=temp;
            temp=temp->next;
            i++;
        }
        pre->next=temp->next;
    }
    free(temp);

    return cust;


}

///Function Name: search_m
///Input : key or pattern, list of mobiles and accessories
///Output :Found Items for given key in Sorted oreder according to increasing order of price
///Description :Provides functionalities for searching based on key nd sorts the found items based on price


void search_m(char* key,MOBILE* start,ACCESS* acc)
{
    int n,m,x=0;
    SEARCH S[50];
    m=strlen(key);
    MOBILE* temp;
    temp=start;
    while(temp!=NULL)
    {
        n=strlen(temp->brand);
        for(i=0;i<n-m;i++)
        {
            j=0;
            while(j<m&&key[j]==temp->brand[i+j])
                j=j+1;

            if(j==m)
            {

                strcpy(S[x].name,temp->brand);
                S[x].price=temp->price;
                strcpy(S[x].version,temp->name);
                ct_m++;
                x++;
                break;
            }
        }

        temp=temp->next;

    }
    m=strlen(key);

    ACCESS* t;
    t=acc;
    int k,l,y;
    while(t!=NULL)
    {
        k=strlen(t->name);
        for(l=0;l<k-m;l++)
        {
            y=0;
            while(y<m&&key[y]==t->name[l+y])
                y=y+1;

            if(y==m)
            {

                strcpy(S[x].name,t->name);
                S[x].price=t->price;
                ct_a++;
                x++;
                break;
            }
        }

        t=t->next;

    }
    float tempr;
    char tempry[20];
    char tem[20];
    for(i=0;i<=(ct_m+ct_a)-2;i++)
    {
        for(j=0;j<=(ct_m+ct_a)-2-i;j++)
        {
            if(S[j+1].price<S[j].price)
            {
                strcpy(tempry,S[j].name);
                strcpy(tem,S[j].version);
                tempr=S[j].price;

                strcpy(S[j].name,S[j+1].name);
                strcpy(S[j].version,S[j+1].version);
                S[j].price=S[j+1].price;

                strcpy(S[j+1].name,tempry);
                strcpy(S[j+1].version,tem);
                S[j+1].price=tempr;


            }
        }

    }

    int p=0;

    if(ct_m==0&&ct_a==0)
    {
    	printf("NO SEARCH FOUND..!!!\n");

    }
    else
    {

    for(;p<ct_m;p++)
    {
        printf("%s %s\n",S[p].name,S[p].version);
        printf("%f\n",S[p].price);
        printf("\n");
    }

    for(;p<ct_a;p++)
    {
        printf("%s\n",S[p].name);
        printf("%f\n",S[p].price);
        printf("\n");
    }
    }
    getch();


}


///Function Name: export
///Input: starting address of mobile list and accessories list
///return type: void
///Provides options for Exporting the Items to differnt branches based on Dijkstras Minimum path algorithm

void export(MOBILE* start,ACCESS* acc)
{
    int op,destn;
    i=1;
    MOBILE* temp;
    temp=start;
    system("cls");
    while(temp!=NULL)
    {
        printf("Option:%d %s%s\n",i,temp->brand,temp->name);
        temp=temp->next;
        i++;
    }

    ACCESS* t;
    t=acc;

    while(t!=NULL)
    {
        printf("Option:%d %s\n",i,t->name);
        t=t->next;
        i++;
    }
    printf("Enter Option\n");
    scanf("%d",&op);

    printf("1->Hubli\n2->Bengaluru\n3->Mumbai\n4->Chennai\n5->Hyderabad\n");

    /*

  DIJKTRAS

  */




	int n,cost[10][10],i,j,d[10],p[10],source;


	printf("Enter the number of vertices..\n");
	    scanf("%d",&n);

	FILE* fp;
	fp=fopen("Distance.txt","r");
	if(fp==NULL)
    {
        printf("Unable to open file\n");
        exit(0);
    }

	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			fscanf(fp,"%d",&cost[i][j]);
		}
	}
	fclose(fp);

	printf("Enter the source vertex\n");
	   scanf("%d",&source);

	dijkstras(n,cost,source,j,d,p);

    getch();

    printf("\nEnter where you want to Export the Item\n");
    printf("1->Hubli\n2->Bengaluru\n3->Mumbai\n4->Chennai\n5->Hyderabad\n");
    scanf("%d",&destn);

    printf("Item Exported to Required Destination\n");
    printpath(d,p,n,source,destn);
    getch();

    temp=start;
    system("cls");
    i=1;
    while(temp!=NULL)
    {
        //printf("Option:%d %s%s\n",i,temp->brand,temp->name);
        if(op==i)
        {
            temp->item--;
        }
        temp=temp->next;
        i++;
    }

    t=acc;

    while(t!=NULL)
    {
        //
        //printf("Option:%d %s\n",i,t->name);
        if(op==i)
        {
            t->item--;
        }
        t=t->next;
        i++;
    }


}




void printpath(int d[],int p[],int n,int source,int destn)
{
	int dest,i;

	for(dest=1;dest<=n;dest++)
	{
	    if(dest==destn)
        {
		i=dest;
		if(d[i]==999)
			printf("%d is not reachable\n",i);
		else
		{
			while(i!=source)
			{
				printf("%d<---",i);
				i=p[i];
			}
			printf("%d total cost=%d\n",source,d[dest]);
		}
	    }
	}
}

void dijkstras(int n,int cost[10][10],int source,int dest,int d[],int p[])
{
	int i,j,u,v;
	int min;
	int s[10];


	for(i=1;i<=n;i++)
	{
		d[i]=cost[source][i];
		s[i]=0;
		p[i]=source;
	}

	s[source]=1;

	for(i=1;i<n;i++)
	{
		min=999;
		u=-1;

		for(j=1;j<=n;j++)
		{
			if(s[j]==0)
			{
				if(d[j]<=min)
				{
					min=d[j];
					u=j;
				}
			}
		}

		if(u==-1)
			return;

		s[u]=1;

		if(u==dest)
			return;


		for(v=1;v<=n;v++)
		{
			if(s[v]==0)
			{
				if(d[u]+cost[u][v]<d[v])
				{
				   d[v]=d[u]+cost[u][v];
				   p[v]=u;
				}
			}
		}
	}
}




///Function Name: import
///Input: starting address of mobile list and accessories list
///return type: void
///Provides options for Importing the Items from differnt branches based on Dijkstras Minimum path algorithm


void import(MOBILE* start,ACCESS* acc)
{
    int op,destn;
    i=1;
    MOBILE* temp;
    temp=start;
    system("cls");
    while(temp!=NULL)
    {
        printf("Option:%d %s%s\n",i,temp->brand,temp->name);
        temp=temp->next;
        i++;
    }

    ACCESS* t;
    t=acc;

    while(t!=NULL)
    {
        printf("Option:%d %s\n",i,t->name);
        t=t->next;
        i++;
    }
    printf("Enter Option\n");
    scanf("%d",&op);

    printf("1->Hubli\n2->Bengaluru\n3->Mumbai\n4->Chennai\n5->Hyderabad\n");

    /*

  DIJKTRAS

  */




	int n,cost[10][10],i,j,d[10],p[10],source;


	printf("Enter the number of vertices..\n");
	    scanf("%d",&n);

	FILE* fp;
	fp=fopen("Distance.txt","r");
	if(fp==NULL)
    {
        printf("Unable to open file\n");
        exit(0);
    }

	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			fscanf(fp,"%d",&cost[i][j]);
		}
	}

	fclose(fp);

	printf("Enter the source vertex\n");
	   scanf("%d",&source);

	dijkstras(n,cost,source,j,d,p);

    getch();

    printf("\nEnter from where you want to Import the Item\n");
    printf("1->Hubli\n2->Bengaluru\n3->Mumbai\n4->Chennai\n5->Hyderabad\n");
    scanf("%d",&destn);

    printf("Item Imported from Required Destination\n");
    printpath(d,p,n,source,destn);
    getch();

    temp=start;
    system("cls");
    i=1;
    while(temp!=NULL)
    {
        //printf("Option:%d %s%s\n",i,temp->brand,temp->name);
        if(op==i)
        {
            temp->item++;
        }
        temp=temp->next;
        i++;
    }

    t=acc;

    while(t!=NULL)
    {
        //
        //printf("Option:%d %s\n",i,t->name);
        if(op==i)
        {
            t->item++;
        }
        t=t->next;
        i++;
    }


}
