
#include<stdio.h>
int main()
{
    int num,temp,temp_2,rem,sum =0,count = 0;
    scanf("%d",&num);
    temp = num;
    while(temp != 0)
    {
        count++;
        temp = temp/10;
    }
    temp_2 = num;
    while(temp_2 != 0)
    {
        rem = temp_2 % 10;
        sum += pow(rem,count);
        temp_2 /= 10;
    }
    if(sum == num)
    {
        printf("Armstrong\n");
    }
    else
    {
        printf("Not Armstrong\n");
    }
    return 0;
}


//370, N = 3(total number is 3).3pow3+7pow3+0pow3 = 370.
