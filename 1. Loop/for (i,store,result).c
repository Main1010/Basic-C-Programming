
#include <stdio.h>
int main()
{
    int i;
    int store = 0;
    int result;
    for(i = 1; i <= 5; i++)
    {
        result = i + store;
        store = result;
        printf("%d\n",store);
    }
    return 0;
}

// Making the upper code in short form :->

#include <stdio.h>
int main()
{
    int i;
    int store = 0;
    for(i = 1; i <= 5; i++)
    {
        store = i + store;
        printf("%d\n",store);
    }
    return 0;
}
