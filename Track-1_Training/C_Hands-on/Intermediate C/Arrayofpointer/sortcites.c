#include<stdio.h>
#include<stdlib.h>
#include<string.h>
 int sortCities(char *cities[], int n){
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(strcmp(cities[j], cities[j+1]) > 0){
                char *temp = cities[j];
                cities[j] = cities[j+1];
                cities[j+1] = temp;
            }
        }
    }
}
    int freecites(char *cities[], int n){
        for(int i=0; i<n; i++){
            free(cities[i]);
        }
    }
    int maint(){
        char *cities[5];
        int n = 5;
        for(int i=0; i<n; i++){
            cities[i] = malloc(50);
            printf("Enter city name: ");
            scanf("%s", cities[i]);

        }
        sortCities(cities, n);
        printf("Sorted cities:\n");
        for(int i=0; i<n; i++){
            printf("%s\n", cities[i]);
        }
        freecites(cities, n);
        return 0;

    }