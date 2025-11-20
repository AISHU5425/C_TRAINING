#include <stdio.h>
#include <math.h>
int main()
{
    float x1,x2,y1,y2;
    printf("Enter coordinates of point 1 (x1,y1):\n");
    scanf("%f %f", &x1, &y1);
    printf("Enter coordinates of point 2 (x2,y2):\n");
    scanf("%f %f", &x2, &y2);
    int x = ((x2-x1), 2);
    int y = ((y2-y1), 2);
    float distance = sqrt (x+y);
     printf ("distance is %1f\n", distance);
    return 0;
}