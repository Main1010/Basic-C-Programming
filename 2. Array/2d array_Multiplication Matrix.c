
//R = Rows.
//C = Columns.
#include<stdio.h>
int main()
{
    int R1,C1,R2,C2,sum = 0;
    printf("Rows & Columns for 1st Matrix : ");
    scanf("%d %d",&R1,&C1);
    printf("Rows & Columns for 2nd Matrix : ");
    scanf("%d %d",&R2,&C2);
    int A[10][10],B[10][10],mul[10][10];
    printf("\n");
    while(R1 != C2)
    {
        printf("Error !! Rows of 1st Matrix not equal to 2nd matrix.\n");
        printf("\nRows & Columns for 1st Matrix : ");
        scanf("%d %d",&R1,&C1);
        printf("Rows & Columns for 2nd Matrix : ");
        scanf("%d %d",&R2,&C2);
    }
    printf("\n");
    //for A matrix.
    for(int i = 0;i < R1;i++)
    {
        for(int j = 0;j < C1;j++)
        {
            printf("A[%d][%d] = ",i+1,j+1);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }
    printf("A = ");
    for(int i = 0;i < R1;i++)
    {
        for(int j = 0;j < C1;j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n    ");
    }
    printf("\n\n");

    //Input for B matrix.
    for(int i = 0;i < R2;i++)
    {
        for(int j = 0;j < C2;j++)
        {
            printf("B[%d][%d] = ",i+1,j+1);
            scanf("%d",&B[i][j]);
        }
        printf("\n");
    }
    printf("B = ");
    for(int i = 0;i < R2;i++)
    {
        for(int j = 0;j < C2;j++)
        {
            printf("%d ",B[i][j]);
        }
        printf("\n    ");
    }

    //Addition.
    for(int i = 0;i < R1;i++)
    {
        for(int j = 0;j < C2;j++)
        {
            for(int k = 0;k < C1;k++)
            {
                sum += A[i][k] * B[k][j];
            }
            mul[i][j] = sum;
            sum = 0;
        }
    }
    printf("\n\n");
    printf("Multiplication of Matrix AxB,\n");
    printf("A x B = ");
    for(int i = 0;i < R1;i++)
    {
        for(int j = 0;j < C2;j++)
        {
            printf("%d ",mul[i][j]);
        }
        printf("\n        ");
    }
    getch ();
}
