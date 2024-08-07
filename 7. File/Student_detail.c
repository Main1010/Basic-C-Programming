
#include<stdio.h>
int main()
{
    FILE *file;

    char name[50];
    int num,i;
    int grade,phone;
    float fees;

    file = fopen("Student_detail.txt","a");

    printf("Number of Students : ");
    scanf("%d",&num);
    for(i = 0;i < num; i++)
    {
        printf("Student Name : ");
        scanf(" %[^\n]",name);

        printf("Student Grade : ");
        scanf("%d",&grade);

        printf("Student Number : ");
        scanf("%d",&phone);

        printf("Student Fees : ");
        scanf("%f",&fees);

        fprintf(file,"\n%s\t\t %d\t\t%d\t\t%.3f",name,grade,phone,fees);
    }
    printf("File Written Successfully.......");
    fclose(file);

    getch();
}
