//R = Rows.
//C = Columns.
#include<stdio.h>
int main()
{
    int R,C,sum_1 = 0,sum_2 = 0;
    printf("Enter the Rows : ");
    scanf("%d",&R);
    printf("Enter the Columns : ");
    scanf("%d",&C);
    int A[R][C];
    printf("\n");
    for(int i = 0;i < R;i++)
    {
        for(int j = 0;j < C;j++)
        {
            printf("A[%d][%d] = ",i+1,j+1);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }
    printf("A = ");
    for(int i = 0;i < R;i++)
    {
        for(int j = 0;j < C;j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n    ");
    }
    for(int i = 0;i < R;i++)
    {
        for(int j = 0;j < C;j++)
        {
            if(i == j)
            {
                printf("%d ",A[i][j]);
                sum_1 += A[i][j];
            }
        }
    }
    for(int i = R-1;i >= 0;i--)
    {
        for(int j = 0;j < C;j++)
        {
            printf("%d ",A[i][j]);
            sum_2 += A[i][j];
        }
    }
    printf("\n");
    printf("Left Sum of diagonal matrix = %d\n",sum_1);
    printf("Right Sum of diagonal matrix = %d\n",sum_2);
    getch ();
}
