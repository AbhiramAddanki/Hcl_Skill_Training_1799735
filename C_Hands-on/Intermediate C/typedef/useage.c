#include<stdio.h>

typedef struct
{
    int id;
    char name[20];
} Student;

int main()
{
    Student s = {1, "Ram"};

    printf("%d %s\n", s.id, s.name);

    return 0;
}