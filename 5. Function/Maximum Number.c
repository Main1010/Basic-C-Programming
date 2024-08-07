

#include<stdio.h>

void maximum(int N[])
{
    int i;
    int max = N[0];
    for(i = 1;i < 5;i++)
    {
        if(max < N[i])
        {
            max = N[i];
        }
    }
    printf("\nMaximum number is %d.\n",max);
}

int main()
{
    int num[5];
    int i;
    printf("Enter the Number,\n");
    for(i = 0;i < 5;i++)
    {
        scanf("%d",&num[i]);
    }
    maximum(num);
    getch();
}
