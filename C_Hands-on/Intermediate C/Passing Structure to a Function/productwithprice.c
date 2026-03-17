#include<stdio.h>

struct Product{
    float price;
    float discount;
};

float calcDiscount(struct Product p)
{
    return p.price - (p.price * p.discount / 100);
}

void updatePrice(struct Product *p)
{
    p->price = p->price - (p->price * p->discount / 100);
}

int main()
{
    struct Product p = {1000, 10};

    printf("Discounted price (value): %.2f\n", calcDiscount(p));

    updatePrice(&p);

    printf("Updated price (address): %.2f\n", p.price);
}