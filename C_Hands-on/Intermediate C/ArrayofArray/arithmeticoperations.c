#include<stdio.h>

int add(int x, int y){
    return x + y;
}

int subtract(int x, int y){
    return x - y;
}

int multiply(int x, int y){
    return x * y;
}

int divide(int x, int y){
    if(y == 0){
        printf("Error: Division by zero\n");
        return 0;
    }
    return x / y;
}

int main(){
    int a, b, choice;
    int (*operation)(int, int);

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("\nSelect operation:\n");
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");

    scanf("%d", &choice);

    if(choice == 1)
        operation = add;
    else if(choice == 2)
        operation = subtract;
    else if(choice == 3)
        operation = multiply;
    else if(choice == 4)
        operation = divide;
    else{
        printf("Invalid choice\n");
        return 1;
    }

    printf("Result = %d\n", operation(a,b));

    return 0;
}