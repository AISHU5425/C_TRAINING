#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct student
{
   char name[100];
   int age;
   float marks;
};
void main()
{
    struct student s1;
    struct student *p= &s1;
    strcpy(p-> name,"namratha");
    p-> age=18;
    p->marks=90.5;
    printf("%d",p->age);
}
    

