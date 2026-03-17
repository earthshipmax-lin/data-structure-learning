#include <stdio.h>
#include "merge_sort.h"

int main()
{
    int arr[5] = {5,4,3,2,1};
    int i;

    mergeSort(arr,0,4);

    for(i=0;i<5;i++)
    {
        printf("%d ",arr[i]);
    }

    printf("\n");

    return 0;
}