#include<stdio.h>

enum Status {PENDING, SHIPPED, DELIVERED};

int main()
{
    enum Status order;
    int choice;

    printf("Select order status:\n");
    printf("0 - PENDING\n");
    printf("1 - SHIPPED\n");
    printf("2 - DELIVERED\n");

    scanf("%d", &choice);

    order = choice;

    printf("Current order status: ");

    if(order == PENDING)
        printf("PENDING\n");
    else if(order == SHIPPED)
        printf("SHIPPED\n");
    else if(order == DELIVERED)
        printf("DELIVERED\n");
    else
        printf("Invalid status\n");

    return 0;
}