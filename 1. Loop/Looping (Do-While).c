
#include<stdio.h>
int main()
{
    int i = 10,sum = 0;
    do
    {
        sum += i;    // First time it will execute once.
        i++;
    }
    while(i < 10);
    {
        printf("%d\n",sum);    // From second time check before entry.
    }
    return 0;
}

// But in [For/While] at First time it will check before entry. there is no second chance.
