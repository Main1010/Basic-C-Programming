
#include<stdio.h>
int main()
{
    FILE *file;
    char name[50];

    file = fopen("text_file.txt","w");

    if(file == NULL)
    {
        printf("File is NOT Created.");
    }
    else
    {
        printf("File is Created.\n");
        printf("Enter your Name : ");
        gets(name);

        fputs(name,file);
        fputs("\n",file);
        printf("File is Written Successfully.\n");
        fclose(file);
    }
    getch();
}
