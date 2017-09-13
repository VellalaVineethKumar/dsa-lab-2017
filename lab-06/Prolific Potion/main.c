#include "Potion_Prep.c"
#include "time.h"

int main()
{
    PP *process = NULL;

    printf("\nThe preparation has begin at...\n");
    time_t start;
    start = time(NULL);
    printf(ctime(&start));
    printf("\n\n");

    /// Call the functions to gather, melt and prepare
    process = gather_ingredients(process);
    brew(process);

    printf("\nThe POTION is ready, The dark army can now be defeated again!\n");
    printf("\n\n");

    printf("\nThe preparation ended at...\n");
    time_t end;
    end = time(NULL);
    printf(ctime(&end));
    printf("\n\n");

    return 0;
}
