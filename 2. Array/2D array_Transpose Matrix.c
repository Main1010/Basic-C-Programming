//R = Rows.
//C = Columns.
#include<stdio.h>
int main()
{
    int R,C;
    printf("Rows & Columns for A Matrix : ");
    scanf("%d %d",&R,&C);
    int A[10][10],Transpose[10][10];
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
    printf("\n");

    for(int i = 0;i < R;i++)
    {
        for(int j = 0;j < C;j++)
        {
            Transpose[j][i] = A[i][j];
        }
    }
    printf("Transpose of A,\n");
    printf("AT = ");
    for(int i = 0;i < C;i++)
    {
        for(int j = 0;j < R;j++)
        {
            printf("%d ",Transpose[i][j]);
        }
        printf("\n     ");
    }
    printf("\n");
    getch ();
}
