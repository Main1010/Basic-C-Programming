
#include<stdio.h>

void display(int N[])
{
    int i;
    printf("Numbers are :\n");
    for(i = 0;i < 5;i++)
    {
        printf("%d\n",N[i]);
    }
}

int main()
{
    int num[5];
    int i;
    for(i = 0;i < 5;i++)
    {
        scanf("%d",&num[i]);
    }
    display(num);
    getch();
}
