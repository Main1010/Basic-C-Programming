
// [goto] is used to transfer the control anywhere in the program.
#include<stdio.h>
int main()
{
    int n,i = 0;
    for(i = 1;i <= 10;i++)
    {
        printf("Enter your value : ");
        scanf("%d",&n);

        table:
            printf("%d x %d = %d\n",n,i,n*i);
            i++;
            if(i <= 10)
            {
                goto table;
            }
    }
    return 0;
}
