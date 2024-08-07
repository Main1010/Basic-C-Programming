#include<stdio.h>
int main()
{
    int n,value,pos = -1;
    printf("Enter the number = ");
    scanf("%d",&n);
    printf("Enter the serial = ");
    int ar[n];
    for(int i = 0;i < n;i++)
    {
        scanf("%d",&ar[i]);
    }
    printf("Enter the value = ");
    scanf("%d",&value);
    for(int i = 0;i < n;i++)
    {
        if(value == ar[i])
        {
            pos = i+1;
            break;
        }
    }
    if(pos == -1)
    {
        printf("The value is not found\n");
    }
    else
    {
        printf("The value is found at position %d\n",pos);
    }
    return 0;
}
