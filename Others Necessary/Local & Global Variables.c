
#include <stdio.h>
int c; // Global variable.

int test1()
{
    int a = 5; // Local variable.
    c = 6;
    printf("from test1 a = %d\n",a);
    printf("from test1 c = %d\n",c);
}

int test2()
{
    int b = 5; // Local variable.
    c = 3;
    printf("from test2 b = %d\n",b);
    printf("from test2 c = %d\n",c);
}

int main()
{
    test1();
    test2();
    return 0;
}
