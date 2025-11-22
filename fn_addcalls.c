#include <stdio.h>
void sum_value(int a, int b, int c)
{
    int sum =a+b+c;
    printf("%d\n", sum);
}
void sum_ref(int *a, int *b, int *c)
{
    int sum = (*a) + (*b)  + (*c);
    printf("%d\n",sum);
}
void main()
{
     int a=90;
     int b=89;
     int c=75;
     printf("call by value:\n");
     sum_value(a,b,c);
     printf("call by reference:\n");
     sum_ref(&a,&b,&c);
}