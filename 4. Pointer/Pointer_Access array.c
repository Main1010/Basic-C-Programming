
#include<stdio.h>
int main()
{
    int a[5] = {10,8,7,9,11};

    int *p = &a[0];

    for(int i = 0;i < 5;i++)
    {
        printf("a[%d] : %d\n",i,*p);
        p++;
    }

    getch();
}
