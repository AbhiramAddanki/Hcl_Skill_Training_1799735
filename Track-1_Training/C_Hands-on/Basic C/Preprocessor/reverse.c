#include <stdio.h>
#include <limits.h>

int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);

    int rev = 0;

    while(a != 0)
    {
        int d = a % 10;

        if(rev > INT_MAX/10 || rev < INT_MIN/10)
        {
            printf("Overflow\n");
            return 0;
        }

        rev = rev * 10 + d;
        a /= 10;
    }

    printf("Reversed number is %d\n", rev);
    return 0;
}