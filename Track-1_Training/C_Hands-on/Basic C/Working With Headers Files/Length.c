#include <stdio.h>

int main(void)
{
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int length = 0;

   while(str[length] != '\0' && str[length] != '\n')
{
    length++;
}
    printf("Length = %d\n", length);

    return 0;
}