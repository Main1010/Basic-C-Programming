
#include<stdio.h>
int main()
{
    int n,i,sum = 0,k = 0,m = 0;
    printf("Enter Value : ");
    scanf("%d",&n);
    int ar[n];
    for(i = 0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(i = 0;i<n;i++)
    {
        sum += ar[i];
    }
    printf("sum = %d\n",sum);
    int avg = sum/n;
    printf("Average = %d\n",avg);
    for(i = 0;i<n;i++)
    {
        if(avg > ar[i])
        {
            k++;
        }
        else if(avg < ar[i])
        {
            m++;
        }
    }
    printf("More then Average = %d\n",k);
    printf("Less then Average = %d\n",m);
    getch();
}
