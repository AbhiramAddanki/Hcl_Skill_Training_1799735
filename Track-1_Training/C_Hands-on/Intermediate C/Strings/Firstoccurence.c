#include<stdio.h>
#include<string.h>
int main(){
    char str[100], ch[100];
   
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    printf("Enter a substring  to find: ");
    scanf("%s", ch);
    int n = strlen(str);
    int m = strlen(ch);
    int pos = -1, i;
    for(i=0; i<n; i++){
        int j;
        for(j=0; j<m; j++){
            if(str[i+j] != ch[j]){
                break;
            }
        }
          if(j == m){
                pos = i;
                break;
            }
    }
    if(pos != -1){
        printf("First occurrence of '%s' is at index %d\n", ch, pos);
    } else {
        printf("Substring '%s' not found in the string.\n", ch);
    }
   
     return 0;
}