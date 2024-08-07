
//Call function call itself.
#include<stdio.h>
int sum(int n)
    {
        if(n == 1)
            return n;// Recursive Function.
        else
            return n + sum(n-1);
    }
int main()
{
    int num = 5;
    int result = sum(num);
    printf("sum = %d",result);
    getch();
}
