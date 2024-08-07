
// [continue] will avoid the loop and then it will got in [for].
#include<stdio.h>
int main()
{
    int n,i,sum = 0;
    for(i = 1;i <= 10;i++)
    {
        printf("Enter your value : ");
        scanf("%d",&n);
        printf("%d\n",n);
        if(n < 0)
        {
            continue;
        }
        printf("No continue\n");
        sum += n;
    }
    printf("sum = %d\n",sum);
    return 0;
}
