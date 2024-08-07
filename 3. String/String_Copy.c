
//Coping 1 String to another.
//we express this with function (strcpy).
#include<stdio.h>
#include<string.h>
int main()
{
    char A[100],B[100];
    printf("Enter String A : ");
    gets(A);
    strcpy(B,A);
    printf("String B : %s",B);
    getch();
}
