#include<stdio.h>
#include<stdlib.h>
 int add(int x, int y){
    return x+y;
}

int subtract(int x, int y){
    return x-y;
}
int multiply(int x, int y){
    return x*y;
}
int divide(int x, int y){
    if(y == 0){
        printf("Error: Division by zero\n");
        return 0;
    }
    return x/y;
}
int main(){
    int a, b, choice;
    int (*operation[4])(int, int) = {add, subtract, multiply, divide};
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("\nSelect operation:\n");
    printf("0 Add\n");
    printf("1 Subtract\n");
    printf("2 Multiply\n");
    printf("3 Divide\n");
    scanf("%d", &choice);
    if(choice >=0 &&choice <=3){
        printf("Result = %d\n", operation[choice](a,b));
    }
    else{
        printf("Invalid choice\n");
        return 1;
    }
    return 0;
}



   