#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

int main()
{
    char input[50];
    char *end;
    long number;

    printf("Enter a number: ");
    scanf("%s", input);

    errno = 0;

    number = strtol(input, &end, 10);

    if(errno != 0 || *end != '\0')
    {
        printf("Invalid number\n");
        return 1;
    }

    printf("Valid number: %ld\n", number);

    return 0;
}
