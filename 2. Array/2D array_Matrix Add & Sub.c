
//R = Rows.
//C = Columns.
#include<stdio.h>
int main()
{
    int R,C;
    printf("Enter the Rows : ");
    scanf("%d",&R);
    printf("Enter the Columns : ");
    scanf("%d",&C);
    int A[R][C],B[R][C],X[R][C];
    printf("\n");
    //for A matrix.
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
    printf("\n\n");

    //Input for B matrix.
    for(int i = 0;i < R;i++)
    {
        for(int j = 0;j < C;j++)
        {
            printf("B[%d][%d] = ",i+1,j+1);
            scanf("%d",&B[i][j]);
        }
        printf("\n");
    }
    printf("B = ");
    for(int i = 0;i < R;i++)
    {
        for(int j = 0;j < C;j++)
        {
            printf("%d ",B[i][j]);
        }
        printf("\n    ");
    }

    //Addition.
    for(int i = 0;i < R;i++)
    {
        for(int j = 0;j < C;j++)
        {
            X[i][j] = A[i][j] + B[i][j];
        }
    }
    printf("\n\n");
    printf("Addition of Matrix A+B,\n");
    printf("A + B = ");
    for(int i = 0;i < R;i++)
    {
        for(int j = 0;j < C;j++)
        {
            printf("%d ",X[i][j]);
        }
        printf("\n        ");
    }
    getch ();
}
