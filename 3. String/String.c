
#include<stdio.h>
int main()
{
    char str[100];
    scanf("%[^\n]",&str);
    //gets(str);{works as scanf}.
    printf("%s",str);
    //puts(str); {works as printf}.
    getch();
}
