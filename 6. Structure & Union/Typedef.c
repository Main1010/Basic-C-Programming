
#include<stdio.h>
/*int main()
{
    typedef char Letter;

    Letter ch1;
    ch1 = 'M';
    printf("ch1 = %c\n",ch1);

    Letter ch2[20] = "Main Uddin";
    puts(ch2);
    getch();
}*/

struct book
{
    char name[20];
    int price;
};

int main()
{
    typedef struct book note; //(typedef) changing name of data type.
    note n = {"English",250};
    printf("Book Name = %s\n",n.name);
    printf("Book Price = $%d",n.price);
    getch();
}
