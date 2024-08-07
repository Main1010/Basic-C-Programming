
#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if(a%2 == 0)    // Condition
    {
        printf("Even\n");
    }
    else    // [Else] always depended on [If].
    {
        printf("Odd\n");
    }
    return 0;
}

