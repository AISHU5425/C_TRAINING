//write a c program which will acept only one input parameters and returns the primeter of circle declare pi as constant
#include <stdio.h>
float perimeter(int r)
{
    const float pi=3.14;
    float peri=2*pi*r;
    return peri;
}
void main()
{
    int r=25;
    printf("%f",perimeter (r));
}
