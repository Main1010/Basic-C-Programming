
#include<stdio.h>
int main()
{
    int n,sum = 0;
    scanf("%d",&n);
    for(int i = 1;i <= n;i = i+2)
    {
        sum = sum + i*i;
    }
    printf("\tsum = %d\n",sum);
    return 0;
}

//example : input = 4.
// 1x1+3x3 = 10.
