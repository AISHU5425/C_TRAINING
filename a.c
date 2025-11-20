#include <stdio.h>

void main() 
{
    int q[3]= {3,4,10};
    int c[3]= {4,6,1};
    for (int i=0; i<3; i++)
    {   
        int t;
        int result;
        t = q[i]*c[i];
        result = result+t;
        printf("total sale is %d\n",result);
    }
}