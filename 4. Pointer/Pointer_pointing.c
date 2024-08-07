
#include<stdio.h>
int main()
{
    int i = 10,j = 8;
    char ch = 'M';
    double d = 8.7;

    int *pi;
    pi = &i;
    printf("Value of i = %d\n",*pi);
    pi = &j;
    printf("Value of j = %d\n",*pi);
    char *pch;
    pch = &ch;
    double *pd;
    pd = &d;
    printf("Value of ch = %c\n",*pch);
    printf("Value of d = %0.1lf\n",*pd);

    getch();
}
