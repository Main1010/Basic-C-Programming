
#include<stdio.h>
int main()
{
    int num,temp,rem,sum =0;
    scanf("%d",&num);
    temp = num;
    while(temp != 0)
    {
        rem = temp % 10;
        sum = sum*10+rem;
        temp /= 10;
        printf("%d\n",rem);
    }
    if(sum == num)
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not Palindrome\n");
    }
    return 0;
}

//121 = reverse then same as previous.
