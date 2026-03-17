#include<stdio.h>
#include<stdlib.h>

struct Item
{
    int id;
    float price;
};

int main()
{
    int n;

    printf("Enter number of items: ");
    scanf("%d",&n);

    struct Item *items;

    items = malloc(n * sizeof(struct Item));


    for(int i=0;i<n;i++)
    {
        printf("Enter id and price: ");
        scanf("%d %f",&items[i].id,&items[i].price);
    }

  
    int del;
    printf("Enter id to delete: ");
    scanf("%d",&del);

    for(int i=0;i<n;i++)
    {
        if(items[i].id == del)
        {
            for(int j=i;j<n-1;j++)
            {
                items[j] = items[j+1];
            }
            n--;
            break;
        }
    }

  
    printf("\nItems list:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d %.2f\n",items[i].id,items[i].price);
    }

    free(items);

    return 0;
}