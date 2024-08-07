
#include<stdio.h>
int main()
{
    int x = 10,y = 8,temp;

    int *px,*py;

    px = &x;
    py = &y;

    printf("Before Swap :\n");
    printf("x = %d\n",x);
    printf("y = %d\n",y);

    temp = *px;
    *px = *py;
    *py = temp;
    printf("\nAfter Swap :\n");
    printf("x = %d\n",x);
    printf("y = %d\n",y);

    getch();
}
