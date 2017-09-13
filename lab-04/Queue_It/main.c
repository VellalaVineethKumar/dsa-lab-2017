#include "static_queue.c"
#include "dynamic_queue.c"

void static_call();
void dynamic_call();

int main()
{
    int choice = 0;
    int x = 0;
    int underflow = 0;
    int overflow = 0;

    printf("Enter the type of queue you want to select\n");
    printf("1-Static\n2-Dynamic\n3-Exit\n");

    printf("Enter your choice\n");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1: static_call();
                break;

        case 2: dynamic_call();
                break;

        case 3: printf("Invalid choice\n");
                      exit(1);
    }

    printf("\nProgram will terminate\n");
    return 0;
}


void static_call()
{
    SQUEUE sq;
    sq.front = 0;
    sq.rear = -1;

    int tchoice = 0;

    while(1)
    {
        printf("MENU\n");
        printf("1-ENQUEUE\n2-DEQUEUE\n3-DISPLAY\n4-EXIT\n");
        printf("Enter your Choice\n");
        scanf("%d", &tchoice);

        switch(tchoice)
        {
            /// Call respective cases
        }

    }

}

void dynamic_call()
{
    DQUEUE *start = NULL;

    /// repeat the same process as static
}
