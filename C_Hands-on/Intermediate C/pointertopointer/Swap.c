#include<stdio.h>
#include<stdlib.h>
int swap(int **a, int **b){
    int *temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    int x = 10, y = 20;
    int *ptr1 = &x;
    int *ptr2 = &y;
    printf("Before swap: ptr1 = %d, ptr2 = %d\n", *ptr1, *ptr2);
    swap(&ptr1, &ptr2);
    printf("After swap: ptr1 = %d, ptr2 = %d\n", *ptr1, *ptr2);
     return 0;
}