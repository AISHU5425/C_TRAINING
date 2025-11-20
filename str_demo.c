#include <stdio.h>
#include <string.h>
void main()
{
    char name [10] = "aishwarya";
    char new[10]="hello";
    printf("%c\n",name[2]);
    printf("length of string is %d\n", strlen(name));
    strcat(new, name);
    printf("%s",new);
    printf("%s",strstr(new,"h"));
    printf("found");
}