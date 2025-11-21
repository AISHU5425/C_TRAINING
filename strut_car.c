// create a structure with three variables with a car maximum speed price store this in an array of structures and display them
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct car
{
   char name[100];
   float speed[100];
   int price;
};
void main()
{
    int n;
    printf("enter number of car:");
    scanf("%d", &n);
    struct car c[n];
    for (int i=0;i<n; i++)
    {
        printf("enter the name of a car:");
        scanf("%s", c[i].name);

        printf("enter speed of a car:");
        scanf("%f", &c[i].speed);

        printf("enter the price of a car:");
        scanf("%d", &c[i].price);
    }
}