
#include<stdio.h>
int main()
{
    FILE *file;
    char name[20] = " Is a good boy.";
    int length = strlen(name);
    int i;

    file = fopen("test.txt","a");

    if(file == NULL)
    {
        printf("File is NOT Created.");
    }
    else
    {
        printf("File is Created.\n");
        for(i = 0;i < length;i++)
        {
            fputc(name[i],file);
        }
        printf("File is Written Successfully.\n");
        fclose(file);
    }
    getch();
}
