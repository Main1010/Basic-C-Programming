
#include<stdio.h>

union test
{
    int x,y;
};

int main()
{
    union test t;
    t.x = 10;
    printf("1st : X = %d\n",t.x);
    printf("1st : Y = %d\n",t.y); //Replace x.

    t.y = 20;
    printf("2nd : X = %d\n",t.x); //Replace y;
    printf("2nd : Y = %d\n",t.y);
    getch();
}
