
#include<stdio.h>
int main()
{
    FILE *file;
    char name[40];
    int age;

    file = fopen("test.txt","r");

    if(file == NULL)
    {
        printf("File is Not exist\n");
    }
    else
    {
        printf("File is Open\n");

        fscanf(file,"%[^\n]",&name);

        printf("%s\n",name);
        fclose(file);
    }
    getch();
}
