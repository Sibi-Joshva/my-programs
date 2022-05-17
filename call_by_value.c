#include<stdio.h>

void value_pass(int v)
{
    printf("before value pass %d\n",v);
    v = v+100;
    printf("addind value inside function %d\n",v);
}

void main()
{
    int x;
    printf("value is ");
    scanf("%d",&x);

    printf("before function call value is : %d\n",x);
    value_pass(x);
    printf("after function call value is : %d\n",x);
}