
#include<stdio.h>

struct person
{
    char name[20];
    int age;
    float salary;
};

void display(struct person P[])
{
    for(int i = 0;i < 3;i++)
    {
        printf("Information of person %d,\n",i+1);
        printf("Name : %s\n",P[i].name);
        printf("Age : %d\n",P[i].age);
        printf("Salary : AED. %.2f\n",P[i].salary);
        printf("\n");
    }
}

int main()
{
    struct person person[3];
    for(int i = 0;i < 3;i++)
    {
        printf("Enter the information of person %d,\n",i+1);
        printf("Name : ");
        scanf(" %[^\n]",person[i].name);
        printf("Age : ");
        scanf("%d",&person[i].age);
        printf("Salary : AED. ");
        scanf("%f",&person[i].salary);
        printf("\n");
    }
    printf("\n\n");
    display(person);

    getch();
}
