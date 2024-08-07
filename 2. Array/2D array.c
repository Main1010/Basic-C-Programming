
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
    getch ();
}
