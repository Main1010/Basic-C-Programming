
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number = ");
    scanf("%d",&n);
    int ar1[n],ar2[n];
    int ar[n];
    printf("Enter the value = ");
    for(int i = 0;i < n;i++)
    {
        scanf("%d",&ar1[i]);
    }
    printf("Array 1 : ");
    for(int i = 0;i < n;i++)
    {
        printf("%d ",ar1[i]);
    }
    for(int i = 0;i < n;i++)
    {
        ar2[i] = ar1[i];
    }
    printf("\nArray 2 : ");
    for(int i = 0;i < n;i++)
    {
        printf("%d ",ar2[i]);
    }
    getch();
}
