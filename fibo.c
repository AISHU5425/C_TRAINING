#include <stdio.h>
void fibo(int n)
{
    int a=15;
    int b=25;
    int sum;
    for ( int i=0;i<1;i++);
    {   
        printf("%d\n",a);
        printf("%d\n",b);
        sum=a+b;
        a=b;
        b=sum;
    }
}
    void main()
    {
        int n;
        printf("enter n:");
        scanf("%d", &n);
        fibo(n);
    }
