

#include<stdio.h>
int main()
{
    int a = 10,b = 8,x;

    int *pa,*pb;
    pa = &a;
    pb = &b;
    x = *pa + *pb;
    printf("Sum = %d\n",x);
    x = *pa - *pb;
    printf("Difference = %d\n",x);
    x = *pa * *pb;
    printf("Product = %d\n",x);
    x = *pa / *pb;
    printf("Dividend = %d\n",x);

    getch();
}
