
//Comparing 1 String to another.
//we express this with function (strcmp).
#include<stdio.h>
#include<string.h>
int main()
{
    char A[100],B[100];
    printf("Enter String A : ");
    gets(A);
    printf("Enter String B : ");
    gets(B);
    int i = strcmp(A,B);
    if(i == 0)
        printf("String A and B are Same !! :) ");
    else
        printf("String A and B are Not Same !! :( ");
    getch();
}
