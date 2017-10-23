#include<stdio.h>
#include<stdlib.h>

int main()
{

    FILE *fp1, *fp2;
    char inputfile[20], outputfile[20];
    int ch;

    printf("Enter the input file name\n");
    scanf("%s", inputfile);

    if((fp1 = fopen(inputfile, "r")) == NULL)
    {
        printf("Error opening the file\n");
        exit(0);
    }

    printf("Enter the output file name\n");
    scanf("%s", outputfile);

    fp2 = fopen(outputfile, "w");
    if(fp2 == NULL)
    {
        printf("Error opening the file\n");
        exit(0);
    }

    // Transfer the contents of file character by character
    while((ch=getc(fp1)) != EOF)
        putc(ch,fp2);

    printf("\nContents of %s are successfully copied to %s\n", inputfile, outputfile);

    fclose(fp1);
    fclose(fp2);

}
