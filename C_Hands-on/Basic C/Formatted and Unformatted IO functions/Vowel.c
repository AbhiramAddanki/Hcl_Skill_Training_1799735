#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    if(ch>='A'&&ch<='Z' || ch>='a'&&ch<='z')
    {
        if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||
           ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
        {
            printf("%c is a vowel\n", ch);
        }
        else
        {
            printf("%c is a consonant\n", ch);
        }

    }
    else 
    {
        if(ch>='0'&&ch<='9')
        {
            printf("%c is a digit\n", ch);
        }
        else
        {
            printf("%c is a special character\n", ch);
        }
    }
     return 0;
}