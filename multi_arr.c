#include <stdio.h>
void main()
{
    int arr[4][2] = {{22,34},{12,45} , {15,26}, {24,50}};
    for( int i=0; i<4; i++)
    {
        for (int j=0;j<2;j++)
        {
            printf("%d\n",arr[i][j]);
        }
    }
}
