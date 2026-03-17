#include <stdio.h>
#include "heap_sort.h"

int main()
{
    int arr[5] = {5,4,3,2,1};
    int i;

    heapSort(arr, 5);

    for(i=0;i<5;i++)
    {
        printf("%d ",arr[i]);
    }

    printf("\n");

    return 0;
}