
#include<stdio.h>
int main()
{
    FILE *file;
    file = fopen("test.txt","w");

    if(file == NULL)
    {
        printf("File is NOT Created :( ######");
    }
    else
    {
        printf("File is Created :) !!!!!!");
        fclose(file);
    }
    getch();
}
