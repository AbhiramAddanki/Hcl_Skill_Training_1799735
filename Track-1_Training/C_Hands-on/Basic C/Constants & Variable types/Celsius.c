#include<stdio.h>
int main()
{
    float celsius, farenheit;
    printf("Enter temperature in celsius: ");
    scanf("%fd", &celsius);
    farenheit = (celsius * 9 / 5) + 32;
    printf("%.1f celsius is equal to %.1f farenheit\n", celsius, farenheit);
        return 0;
        
}