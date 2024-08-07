
#include<stdio.h>
#include<string.h>
int main()
{
    char A[100],B[100],temp[100];
    printf("Enter String A : ");
    gets(A);
    printf("Enter String B : ");
    gets(B);
    strcpy(temp,A);
    strcpy(A,B);
    strcpy(B,temp);
    printf("\nString A : %s",A);
    printf("\nString B : %s",B);
    getch();
}
