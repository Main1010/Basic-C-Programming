
#include<stdio.h>
int main()
{
    int x = 5;
    int *p = &x;

    printf("Value of x = %d\n",x);
    printf("Address of x = %u\n",&x);
    printf("Value of p = %d\n",*p);
    printf("Address of p = %u\n",p);
    printf("Address of pointer = %u\n",&p);

    getch();
}
