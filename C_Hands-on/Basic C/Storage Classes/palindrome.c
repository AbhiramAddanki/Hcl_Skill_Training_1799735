#include<stdio.h>
int main(){

    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    int i=0, j=0;
    while(str[i]!='\0' && str[i]!='\n')
    {
        i++;
    }
    i--;
    while(j<i)

    {
        if(str[j]!=str[i])
        {
            printf("Not a palindrome\n");
            return 0;
        }
        j++;
        i--;
    }
    printf("Palindrome\n");
    return 0;
    
}