
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n];
    ar[0] = 0;
    ar[1] = 1;
    for(int i = 2;i < n;i++)
    {
        ar[i] = ar[i-1]+ar[i-2];
    }
    printf("First %d Fibonacci numbers are ",n);
    for(int i = 0;i < n;i++)
    {
        printf("%d ",ar[i]);
    }
    return 0;
}
