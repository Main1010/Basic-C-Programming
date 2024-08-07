#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    long long i,temp,fib[n];
    fib[1] = 0;
    fib[2] = 1;
    for(i = 3;i<=n;i++)
    {
        fib[i] = fib[i-1] + fib[i-2];
        temp = fib[i];
    }
    if(n>=3)
        printf("%lld",temp);
    else if(n == 2)
        printf("1");
    else if(n == 1)
        printf("0");
    return 0;
}
