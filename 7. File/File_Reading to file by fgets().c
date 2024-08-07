
#include<stdio.h>
int main()
{
    FILE *file;
    char ch[40];
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
            fgets(ch,20,file);
            printf("%s\n",ch);
        }

        fclose(file);
    }
    getch();
}
