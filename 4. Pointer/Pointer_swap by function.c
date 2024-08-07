
#include<stdio.h>

void swap(int *px,int *py,int *pz)
{
    int temp;
    temp = *px;
    *px = *py;
    *py = *pz;
    *pz = temp;
}

int main()
{
    int x = 10,y = 8,z = 7;
    printf("Before Swap :\n");
    printf("x = %d\n",x);
    printf("y = %d\n",y);
    printf("z = %d\n",z);

    swap(&x,&y,&z);
    printf("\nAfter Swap :\n");
    printf("x = %d\n",x);
    printf("y = %d\n",y);
    printf("z = %d\n",z);
    getch();
}
