
#include<stdio.h>

enum days_of_week
{
    Sun = 1,Mon,Tue,Wed,Thu,Fri //automatic initialize after Sun = 1.
};

int main()
{
    enum days_of_week day1,day2;
    day1 = Mon;
    printf("day %d\n",day1);
    day2 = Fri - Tue;
    printf("day %d\n",day2);
    getch();
}
