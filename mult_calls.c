//write a function which will multiply three numbers and call it by reference
#include <stdio.h>
void prod_value(int a, int b, int c)
{
    int prod =a*b*c;
    printf("%d\n",prod);
}
void prod_ref(int *a, int *b, int *c)
{
    int prod = (*a) * (*b)  * (*c);
    printf("%d\n",prod);
}
void main()
{
     int a=90;
     int b=89;
     int c=75;
     printf("call by value:\n");
     prod_value(a,b,c);
     printf("call by reference:\n");
     prod_ref(&a,&b,&c);
}