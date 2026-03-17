#include<stdio.h>
struct Student{
    char name[50];
    int roll;
    float marks;
};
int main(){
    float topermarks = 0.0;
    struct Student topper;
    int n;
    scanf("%d",&n);
    struct Student students[n];
    for(int i=0; i<n; i++){
        scanf("%s %d %f",students[i].name, &students[i].roll, &students[i].marks);
        if(students[i].marks > topermarks){
            topermarks = students[i].marks;
            topper = students[i];
        }
    }
    printf("Topper: %s\nRoll: %d\nMarks: %.2f\n",topper.name, topper.roll, topper.marks);
     return 0;
}