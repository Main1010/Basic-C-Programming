
#include<stdio.h>

void calculatepower(int B,int E)
{
    int i,result = 1;
    for(i = 0;i < E;i++)
    {
        result *= B;
    }
    printf("%d Power %d = %d",B,E,result);
}

int main()
{
    int base,exp;
    printf("Base = ");
    scanf("%d",&base);
    printf("Exp = ");
    scanf("%d",&exp);
    calculatepower(base,exp);
    getch();
}
