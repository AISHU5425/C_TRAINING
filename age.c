#include <stdio.h>

int main()
{
    int age;
    float height;
    printf("Enter age: ");
    scanf("%d", &age);
    printf("Enter height: ");
    scanf("%f", &height);
    if ((age > 12) && (height > 4.5))
    {
        printf("you can ride the rollar coaster!");
    } 
       else
    {
        printf("grow up and come back!");
    }
     return 0;
}
   