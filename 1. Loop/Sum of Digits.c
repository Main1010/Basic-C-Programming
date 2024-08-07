#include<stdio.h>
int main()
{
    int num,temp,rem,sum =0;
    scanf("%d",&num);
    temp = num;
    while(temp != 0)
    {
        rem = temp % 10;
        sum += rem;
        temp /= 10;
    }
    printf("Sum = %d\n",sum);
    return 0;
}
