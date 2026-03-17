#include<stdio.h>
int main(){
    int arr[5]={10,20,30,40,50};
    int n=5, sum=0;
        float average;

   int *ptr=arr;
    for(int i=0; i<n; i++){
        sum += (*(ptr+i));
    }
    average = sum/n;
    printf("Average = %.2f\n", average);
     return 0;
}