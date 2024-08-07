
#include<stdio.h>
int main()
{
    int n1,n2,a = 1,b = 2,sum = 0;
    printf("Digits = ");
    scanf("%d %d",&n1,&n2);
    while(a <= n1 && b <= n2)
    {
        sum += a*b;
        a = a+1;
        b = b+1;
    }
    printf("\n1x2+2x3+3x4+.....+%dx%d\n",n1,n2);
    printf("\tSummation = %d\n",sum);
    return 0;
}
