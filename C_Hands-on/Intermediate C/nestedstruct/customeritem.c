#include<stdio.h>

struct Customer
{
    int id;
    char name[20];
};

struct Item
{
    char name[20];
    float price;
};

struct Order
{
    struct Customer c;
    struct Item item;
};

void printOrder(struct Order o)
{
    printf("Customer: %s\n", o.c.name);
    printf("Item: %s\n", o.item.name);
    printf("Price: %.2f\n", o.item.price);
}

int main()
{
    struct Order o = {{1,"Ram"},{"Laptop",50000}};

    printOrder(o);

    return 0;
}