
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i,capital,small,digit;

    printf("Enter the String : ");
    gets(str);

    i = capital = small = digit = 0;

    while(str[i] != '\0')
    {
        if(str[i] >= 65 && str[i] <= 90)
        {
            capital++;
        }
        else if(str[i] >= 97 && str[i] <= 122)
        {
            small++;
        }
        else if(str[i] >= 48 && str[i] <= 57)
        {
            digit++;
        }
        i++;
    }
    printf("\nNumber of Capital Letters : %d",capital);
    printf("\nNumber of Small Letters : %d",small);
    printf("\nNumber of digits : %d",digit);
    getch();
}
