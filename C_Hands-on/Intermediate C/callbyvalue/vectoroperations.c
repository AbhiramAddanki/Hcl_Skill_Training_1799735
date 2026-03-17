#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int *data;
    int size;
    int capacity;
} Vector;

void init(Vector *v)
{
    v->size = 0;
    v->capacity = 2;
    v->data = malloc(v->capacity * sizeof(int));
}

void resize(Vector *v, int new_capacity)
{
    v->capacity = new_capacity;
    v->data = realloc(v->data, new_capacity * sizeof(int));
}

void push(Vector *v, int value)
{
    if(v->size == v->capacity)
    {
        resize(v, v->capacity * 2);
    }

    v->data[v->size++] = value;
}

int pop(Vector *v)
{
    if(v->size == 0)
    {
        printf("Vector empty\n");
        return -1;
    }

    return v->data[--v->size];
}

void print(Vector *v)
{
    for(int i=0;i<v->size;i++)
        printf("%d ", v->data[i]);

    printf("\n");
}

int main()
{
    Vector v;
    init(&v);

    push(&v,10);
    push(&v,20);
    push(&v,30);
    push(&v,40);

    print(&v);

    printf("Popped: %d\n", pop(&v));

    print(&v);

    free(v.data);
}