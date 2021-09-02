
#include<stdio.h>
void main()
{
    FILE *fp;
    char feedback[200];
    fp = fopen("Comments.TXT","w");
    if(fp == NULL)
    {
        printf("\n The file could not be opened.");
    }
    printf("\n Provide feedback on this book: ");
    gets(feedback);
    fflush(stdin);
    fputs(feedback,fp);
    fclose(fp);
}
