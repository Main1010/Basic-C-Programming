
//(1*2) + (2*3) + (3*4) + ……n
#include<stdio.h>
int sum(int n)
    {
        if(n > 0)
        {
            return (n * (n + 1) + sum(n - 1));
        }
        else
        {
            return n;
        }
    }
int main()
{
    int num;
    scanf("%d",&num);
    int result = sum(num);
    printf("(1*2)+(2*3)+...+%d = %d\n",num,result);
    return 0;
}
