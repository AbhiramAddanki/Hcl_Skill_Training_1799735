#include<stdio.h>
struct Student{
    char name[50];
    int roll;
    float marks;
};
int update(struct Student *st){
    st->marks += 5.0;
    return 0;
}
int main(){
    struct Student st={"Abhi",1202,85.5};
    printf("Name: %s\nRoll: %d\nMarks: %.2f\n",st.name, st.roll, st.marks);
    update(&st);
    printf("After update:\n");
    printf("Name: %s\nRoll: %d\nMarks: %.2f\n",st.name, st.roll, st.marks);
     return 0;

}