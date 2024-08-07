
#include<stdio.h>

struct person
{
    char name[50];
    int age;
    float salary;
};

int main()
{
    struct person person[3];
    for(int i = 0;i < 3;i++)
    {
        printf("Enter the information of person %d,\n",i+1);
        printf("Name : ");
        scanf(" %[^\n]",person[i].name);
        //gets(person[i].name];
        printf("Age : ");
        scanf("%d",&person[i].age);
        printf("Salary : AED. ");
        scanf("%f",&person[i].salary);
        printf("\n");
    }
    printf("\n");
    for(int i = 0;i < 3;i++)
    {
        printf("Information of person %d,\n",i+1);
        printf("Name : %s\n",person[i].name);
        printf("Age : %d\n",person[i].age);
        printf("Salary : AED. %.2f\n",person[i].salary);
        printf("\n");
    }
    getch();
}
