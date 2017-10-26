#include "calc.c"
#include "sales.c"
#include "access.c"


int main()
{
    MOBILE* start=NULL;
    start=getdata();

    CUST* cust=NULL;

    ACCESS* acc=NULL;
    acc=getacc();

    QUEUE* wake=NULL;



    selec(start,cust,acc,wake);
    return 0;
}
