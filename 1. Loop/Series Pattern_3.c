
#include <stdio.h>
int main()
{
    int n,r,c;
    scanf("%d",&n):
    for(r = 1;r<=n;r++)
    {
        for(c = 1;c<=n;c++)
        {
            if(r == 1 || r == n || c == 1 || c == n)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }

    printf("\n");

    for(r = 1;r<=n;r++)
    {
        for(c = 1;c<=n;c++)
        {
            if(r == n || c == 1 || c == r)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }

    printf("\n");

    for(r = 1;r<=n;r++)
    {
        for(c = 1;c<=n;c++)
        {
            if(c == r || r+c == n+1)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }

    getch();
}
