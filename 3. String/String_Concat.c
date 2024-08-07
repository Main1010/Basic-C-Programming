
//Replacing 2nd String with 1st.
//we express this with function (strcat).
#include<stdio.h>
#include<string.h>
int main()
{
    char A[100],B[100];
    printf("Enter String A : ");
    gets(A);
    printf("Enter String B : ");
    gets(B);
    strcat(A,B);
    printf("String A : %s",A);
    getch();
}

