
#include<stdio.h>
struct person
{
    int age;
    float salary;
};

int main()
{
    struct person person1 = {20,4200.500},person4 = {20,4200.500};
    struct person person2 = {25,2530.2000},person3 = {30,3200.300};
    //person4 = person1;

    if(person1.age == person4.age && person1.salary == person4.salary)
    {
        printf("person1 and person4 both are same :) :)\n");
    }
    else
    {
        printf("person1 and person4 both are same not same:( :(\n");
    }

    if(person2.age == person3.age && person2.salary == person3.salary)
    {
        printf("person2 and person3 both are same :):)\n");
    }
    else
    {
        printf("person2 and person3 both are not same :( :(\n");
    }
    getch();
}
