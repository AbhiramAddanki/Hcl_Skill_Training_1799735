#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,m;
    printf("Enter the size of first array: ");
    scanf("%d", &n);
    printf("Enter the size of second array: ");
    scanf("%d", &m);
    int *arr1 = (int*)malloc(n*sizeof(int));
    int *arr2 = (int*)malloc(m*sizeof(int));    
    printf("Enter the elements of first array: ");
    for(int i=0; i<n; i++){
        scanf("%d", &arr1[i]);
    }
    printf("Enter the elements of second array: ");
    for(int i=0; i<m; i++){
        scanf("%d", &arr2[i]);
    }
    int *merged = (int*)malloc((n+m)*sizeof(int));
    int i=0, j=0, k=0;
    while(i<n && j<m){
        if(arr1[i] < arr2[j]){
            merged[k++] = arr1[i++];
        } else {
            merged[k++] = arr2[j++];
        }
    }
    printf("Merged array: ");
    for(int i=0; i<(n+m); i++){
        printf("%d ", merged[i]);
    }
    free(arr1);
    free(arr2);
    free(merged);

}