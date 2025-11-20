// write a function which will except two input parameters x,y and returns x^2 and y^2
#include <stdio.h>
int squre(int x, int y)
{
    int squre=x*x+y*y;
    return squre;
}
void main()
{
    int x=2,y=4;
    printf("the squre of two variables x and y is %d",squre(x,y));
}