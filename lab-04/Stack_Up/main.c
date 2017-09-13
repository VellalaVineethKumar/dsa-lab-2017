#include "static_stack.c"
#include "dynamic_stack.c"

void static_call();
void dynamic_call();

int main()
{
    int choice = 0;
    int x = 0;
    int underflow = 0;
    int overflow = 0;

    printf("Enter the type of stack you want to select\n");
    printf("1-Static\n2-Dynamic\n3-Exit\n");

    printf("Enter your choice\n");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1: static_call();
                break;

        case 2: dynamic_call();
                break;

        case 3: printf("\nProgram will terminate\n");
                exit(1);
    }
    return 0;
}


void static_call()
{
    SSTACK ss;
    ss.top = -1;

    int tchoice = 0;

    while(1)
    {
        printf("MENU\n");
        printf("1-PUSH\n2-POP\n3-PEEK\n4-PRINT\n5-EXIT\n");
        printf("Enter your Choice\n");
        scanf("%d", &tchoice);

        switch(tchoice)
        {
            /// Call respective cases


            case 5: exit(0);
        }

    }

}

void dynamic_call()
{
    DSTACK *start = NULL;

    /// repeat the same process as static
}
