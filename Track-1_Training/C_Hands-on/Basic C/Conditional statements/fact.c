#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    if(a<0)
    {
        printf("Factorial is not defined for negative numbers\n");
    }
    else if(a==0)
    {
        printf("Factorial of 0 is 1\n");
    }
    else
    {
        int fact=1;
        for(int i=1; i<=a; i++)
        {
            fact *= i;
        }
        printf("Factorial of %d is %d\n", a, fact);
    }
     return 0;
}