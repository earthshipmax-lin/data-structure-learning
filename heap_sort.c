#include "heap_sort.h"

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

//调整堆
void heapify(int arr[], int n, int i)
{
    int largest = i;        //当前最大
    int left = 2*i + 1;     //左子节点
    int right = 2*i + 2;    //右子节点

    //找最大
    if (left < n && arr[left] > arr[largest])
        largest = left;

    if (right < n && arr[right] > arr[largest])
        largest = right;
    
    //如果不是根节点最大，就交换
    if (largest != i)
    {
        swap(&arr[i], &arr[largest]);

        //递归调整
        heapify(arr, n, largest);
    }
}

//主函数
void heapSort(int arr[], int n)
{
    int i;

    //1.建堆
    for (i = n/2 - 1; i >= 0; i--)
    {
        heapify(arr, n, i);
    }

    //2.排序
    for (i = n-1; i > 0; i--)
    {
        //把最大值放到最后
        swap(&arr[0], &arr[i]);

        //重新调整堆
        heapify(arr, i, 0);
    }
}