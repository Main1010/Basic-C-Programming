
#include<stdio.h>
int main()
{
    FILE *file;
    char name[50];
    int age;
    float salary;

    file = fopen("text_file.txt","a");

    if(file == NULL)
    {
        printf("File is NOT Created.");
    }
    else
    {
        printf("File is Created.\n");
        printf("Name : ");
        gets(name);

        printf("Age : ");
        scanf("%d",&age);

        printf("Salary : ");
        scanf("%f",&salary);

        fprintf(file,"Name : %s\nAge : %d\nSalary : %.3f",name,age,salary);
        fputs("\n",file);

        printf("File is Written Successfully.\n");
        fclose(file);
    }
    getch();
}
