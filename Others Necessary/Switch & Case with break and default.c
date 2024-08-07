
#include<stdio.h>
int main()
{
    int digit;
    printf("Enter the digit : ");
    scanf("%d",&digit);
    switch(digit)    // Only Expression.
    {
    case 0:   // [Case] Like as conditional statement.
        printf("Zero\n");
        break;
    case 1:
        printf("One\n");
         break;
    case 2:
        printf("Two\n");
         break;
    case 3:
        printf("Three\n");
         break;
    case 4:
        printf("Four\n");
         break;
    case 5:
        printf("Five\n");
         break;
    case 6:
        printf("Six\n");
         break;
    case 7:
        printf("Seven\n");
         break;
    case 8:
        printf("Eight\n");
         break;
    case 9:
        printf("Nine\n");
         break;
    default:
        printf("Not valid\n"); // [default] works as [else] statement.
    }
    return 0;
}
