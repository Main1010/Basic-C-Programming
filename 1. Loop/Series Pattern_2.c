

#include<stdio.h>

void pattern(int n)
{
    int r,c;
    for(r = n;r>=1;r--)
    {
        for(c = 1;c<=n-r;c++)
        {
            printf(" ",c);
        }
        for(c = 1;c<=r;c++)
        {
            printf("* ",c);
        }
        printf("\n");
    }
    getch();
}

int main()
{
    int n,r,c;
    scanf("%d",&n);
    for(r = 1;r<=n;r++)
    {
        for(c = 1;c<=n-r;c++)
        {
            printf(" ",c);
        }
        for(c = 1;c<=r;c++)
        {
            printf("* ");
        }
        printf("\n");
    }
    pattern(n);
    getch();
}
