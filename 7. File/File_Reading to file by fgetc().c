
#include<stdio.h>
int main()
{
    FILE *file;
    char ch;
    file = fopen("text_file.txt","r");

    if(file == NULL)
    {
        printf("File is Not exist\n");
    }
    else
    {
        printf("File is Open\n");

        while(!feof(file))
        {
            ch = fgetc(file);
            printf("%c",ch);
        }

        fclose(file);
    }
    getch();
}
