//write a c program which will acept three parameters l,b,h and returns volume of the cube
#include <stdio.h>
float volume(float l, float b, float h)
{
    return l * b * h;
}
int main()
 {
    float l, b, h;
    printf("Enter l, b, h: ");
    scanf("%f %f %f", &l, &b, &h);

    printf("Volume = %.2f\n", volume(l, b, h));

    return 0;
 }