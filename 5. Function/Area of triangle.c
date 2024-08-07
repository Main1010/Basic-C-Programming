
#include<stdio.h>

double trianglearea(double B,double H)
{
    double A = (B * H)/(float)2;
    return A;
}

int main()
{
    double base,height;
    printf("Area of a triangle,\n");
    printf("base = ");
    scanf("%lf",&base);
    printf("height = ");
    scanf("%lf",&height);
    double area = trianglearea(base,height);
    printf("Area = %.2lf",area);
    getch();
}
