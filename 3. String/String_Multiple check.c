
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],ch;
    int i,word,vowel,consonant,digit,other;

    printf("Enter the String : ");
    gets(str);

    i = word = vowel = consonant = digit = other = 0;

    while((ch = str[i]) != '\0')
    {
        if(ch == ' ')
        {
            word++;
        }
        else if((ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') ||
           (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'))
        {
            vowel++;
        }
        else if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
        {
            consonant++;
        }
        else if(ch >= '0' && ch <= '9')
        {
            digit++;
        }
        else
        {
            other++;
        }
        i++;
    }
    word++;

    printf("\nNumber of words : %d",word);
    printf("\nNumber of vowel : %d",vowel);
    printf("\nNumber of consonant : %d",consonant);
    printf("\nNumber of digit : %d",digit);
    printf("\nNumber of other : %d",other);
    getch();
}
