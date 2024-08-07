
//String reverse.
//we express this with function (strrev).
#include<stdio.h>
#include<string.h>
int main()
{
    char A[100];
    printf("Enter String A : ");
    gets(A);
    strrev(A);
    printf("Reverse of A : %s",A);
    getch();
}

