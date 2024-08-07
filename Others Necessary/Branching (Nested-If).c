
// [Nested-If] is if any [If] is takes another [If] condition.
#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if(a%2 == 0)
    {
        if(a > 0)    // --> [Nested-If]
        {
            printf("Even\n");
        }
    }
    else if(a > 0)    // --> [Nested-If]
    {
        printf("Odd\n");
    }
    if( a == 0)
    {
        printf("zero\n");
    }
    else if(a < 0)
    {
        printf("Negative value\n");
    }
    return 0;
}

