
//length means how many digit of character is there.
//we express this with function (strlen).
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    printf("Enter String : ");
    gets(str);
    printf("length = %d",strlen(str));
    getch();
}
