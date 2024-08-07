
#include<stdio.h>
int add(int a,int b) // User defined Function
{
    int c = a + b;
    return c;
}

int main() // Main Function.
{
    int x = 3,y = 2;
    int z = add(x,y); //add(argument {giving value after calling}).[Call Function]
    printf("%d\n",z);
    getch();
}

//User Defined Function(Declare & Defined):-gate-way name(parameter {main place}).
//Main Function:- Every U.D.F is depend on main function.
