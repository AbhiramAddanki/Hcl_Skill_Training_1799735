#include<stdio.h>

int add(int a,int b){ return a+b; }
int sub(int a,int b){ return a-b; }
int mul(int a,int b){ return a*b; }
int divi(int a,int b){ return a/b; }

int main()
{
    int a=10,b=5,choice;

    int (*op[4])(int,int) = {add,sub,mul,divi};

    printf("0:+ 1:- 2:* 3:/ ");
    scanf("%d",&choice);

    printf("Result = %d\n", op[choice](a,b));

    return 0;
}