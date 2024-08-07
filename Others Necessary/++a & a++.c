//No.1:-
#include<stdio.h>
int main()
{
    int a,b;
    a = 10;
    b = ++a; //(Prefix Increment) First it will add 1 then assign into b.
    printf("a = %d\nb = %d\n",a,b);
    return 0;
}

//No.1:-
#include<stdio.h>
int main()
{
    int a,b;
    a = 10;
    b = ++a; //(Postfix Increment) First it will assign into b then it will add 1.
    printf("a = %d\nb = %d\n",a,b);
    return 0;
}

//No.3:-
#include<stdio.h>
int main()
{
    int a,b;
    a = 10;
    b = a++ + ++a; //(Undefined behavior) It will not any Correct Reading.
    printf("a = %d\nb = %d\n",a,b);
    return 0;
}
