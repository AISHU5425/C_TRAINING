#include <stdio.h>
int myadd (int a, int b)
{ 
    int sum = a+b;
    return sum;
}
void main()
{
    int a=25;
    int b=15;
    printf("%d\n",myadd(a,b));
    int c=80;
    int d=45;
    printf("%d\n", myadd(c,d));
}
