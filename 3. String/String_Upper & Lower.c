
//Conversion of Uppercase and Lowercase of character .
//we express this with function (strupr) and (strlwr).
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    printf("Enter String : ");
    gets(str);
    strupr(str);
    //strlwr(str);
    printf("Uppercase : %s",str);
    //transform(s1.begin(),s1.end(),s1.begin(),::tolower);
    //transform(s1.begin(),s1.end(),s1.begin(),::toupper);
    getch();
}
