
#include<stdio.h>
int main()
{
    int num,i,sum = 0;
    printf("Enter the Number : ");
    scanf("%d",&num);
    for(i = 1;i < num;i++)
    {
        if(num % i == 0)
        {
            sum += i;
        }
    }
    if(sum == num)
    {
        printf("%d is Perfect Number",num);
    }
    else
    {
        printf("%d is Not perfect Number",num);
    }
    getch();
}

//Perfect number : a number which summation of divisible is same.ex: 6 = 1+2+3 = 6.
