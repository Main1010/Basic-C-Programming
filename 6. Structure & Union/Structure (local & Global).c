
#include<stdio.h>
struct person       //Global structure: outside the main function.
{
    int age;
    float salary;
};

struct person person1,person2; //Global variable: inside the main function.

int main()
{
    //struct person person1,person2; //local variable: inside the main function.

    /*struct person  //local structure: inside the main function.
    {
        int age;
        float salary;
    };*/

    printf("Person1 :-> \n");
    person1.age = 20;
    person1.salary = 4200.500;
    printf("age : %d\nsalary : %.3f\n",person1.age,person1.salary);

    printf("\nPerson2 :-> \n");
    person2.age = 25;
    person2.salary = 1200.500;
    printf("age : %d\nsalary : %.3f\n",person2.age,person2.salary);

    getch();
}
