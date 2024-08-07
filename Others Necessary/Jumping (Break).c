
#include<stdio.h>
int main()
{
    int n,i,sum = 0;
    for(i = 1;i <= 10;i++)
    {
        printf("Enter the value : ");
        scanf("%d",&n);
        if(n < 0)
        {
            break;
        }
        printf("After break statement\n");
        sum += n;
    }
    printf("sum = %d\n",sum);
    return 0;
}

// 1. [Break] is used in the loop.
// 2. It is used to break the continued rotating process of the loop.
// 3. Must be if condition needed.
// 4. If there is [Break] it will exit the loop and not follow nest statement.
