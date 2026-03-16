#include <stdio.h>
#include "bubble_sort.h"

int main()
{
    int arr[5] = {5,4,3,2,1};
    int i;

    bubbleSort(arr,5);

    for(i=0;i<5;i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}