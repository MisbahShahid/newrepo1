#include <stdio.h>
#include <stdlib.h>

int main()
{
    
    FILE * fp;
    char ch;
    fp = fopen("write.txt", "r");
    if(fp == NULL)
    {
        printf("\n No file exists \n");
        printf("\n check whether file exists \n\n");
        exit(1);
    }

    printf("\n read contents of file \n\n");

    do 
    {
        ch = fgetc(fp);
        putchar(ch);

    } 
        while(ch != EOF);
        fclose(fp);
 return 0;
    }
