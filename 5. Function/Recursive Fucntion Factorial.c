
#include<stdio.h>
int fact(int n)
    {
        if(n == 1)
            return n;
        else
            return n * fact(n-1);
    }
int main()
{
    int num;
    scanf("%d",&num);
    int result = fact(num);
    printf("factorial %d! = %d",num,result);
    getch();
}
