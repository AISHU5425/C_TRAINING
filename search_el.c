#include <stdio.h>
int search(int arr[],int key,int n)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        return 1;
    }
    return 0;
}
void main()
{   
    int key;
    int n=5;
    int arr[5] = { 32,45,67,12,78 };
    printf("what are you searching");
    scanf("%d",&key);
    printf("%d\n",search(arr,key,n));
}