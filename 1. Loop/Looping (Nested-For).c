
// Like a [Nested-If].
#include<stdio.h>
int main()
{
    int i,a;
    for(i = 1;i <= 4;i++)
    {
        for(a = 1;a <= 4;a++) // One [FOR] is on another [For].
        {
            printf("%d ",a);
        }
        printf("\n");
    }
    return 0;
}
