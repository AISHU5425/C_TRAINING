//write a c function which will accept an arraya,it's size as n and returns the difference between last and first element
#include <stdio.h>
#include <stdlib.h>
int sub_arr(int arr[],int n)
{
    int sub= arr[0]-arr[n-1];
    return abs(sub);
}
void main()
{
    int arr[4]={2,4,9,10};
    int n=4;
    printf("%d",sub_arr(arr,n));
}
