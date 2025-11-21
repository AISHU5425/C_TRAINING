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
    strcpy(s1.name,"aishu");
    s1.age=17;
    s1.marks=98.6;

    struct student s2;
    strcpy(s2.name,"anni");
    s2.age=13;
    s2.marks=21.4;

    struct student s3;
    strcpy(s3.name,"spoo");
    s3.age=16;
    s3.marks=12.5;

    printf("%s ", s3.name);
    printf("%d",s3.age);
}
