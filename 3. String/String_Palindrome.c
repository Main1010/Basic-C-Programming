
#include<stdio.h>
#include<string.h>
int main()
{
    char A[100],B[100];
    printf("Enter the String : ");
    gets(A);
    strcpy(B,A);
    strrev(A);
    int cmp = strcmp(A,B);
    if(cmp == 0)
        printf("\nString is Palindrome yes! yes! yes!");
    else
        printf("\nString is Not Palindrome no! no! no!");
    getch();
}
