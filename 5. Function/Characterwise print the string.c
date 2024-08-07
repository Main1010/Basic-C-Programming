
#include<stdio.h>

void display(char S[])
{
    int i = 0;
    while(S[i] != '\0')
    {
        printf("%c\n",S[i]);
        i++;
    }
}

int main()
{
    int str[20];
    printf("Enter the String : \n");
    gets(str);
    display(str);
    getch();
}
