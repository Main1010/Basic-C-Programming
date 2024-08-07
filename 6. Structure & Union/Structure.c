
#include<stdio.h>
struct person
{
    char name[20];
    int age;
    float salary;
};

int main()
{
    struct person person1,person2,person4;
    struct person person3 = {"Said Amin",24,3200.300};

    //element wise assignment.
    printf("Person1 :-> \n");
    strcpy(person1.name,"Main Uddin");
    person1.age = 20;
    person1.salary = 4200.500;
    printf("Name : %s\nage : %d\nsalary : %.3f\n",person1.name,person1.age,person1.salary);

    printf("\nPerson2 :-> \n");
    scanf(" %[^\n]",person2.name);
    scanf("%d",&person2.age);
    scanf("%f",&person2.salary);
    printf("Name : %s\nage : %d\nsalary : %.3f\n",person2.name,person2.age,person2.salary);

    printf("\nPerson3 :-> \n");
    printf("Name : %s\nage : %d\nsalary : %.3f\n",person3.name,person3.age,person3.salary);

    //variable assignment.
    person4 = person1;
    printf("\nPerson4 :-> \n");
    printf("Name : %s\nage : %d\nsalary : %.3f\n",person4.name,person4.age,person4.salary);

    getch();
}
