#include <stdio.h>
void InsertSort(int (*arr)[], int size)
{
    int i, j, x;
    for (i = 0; i < size; i++)
    {
        x = (*arr)[i];
        j = i - 1;
        while (j >= 0 && (*arr)[j] > x)
        {
            (*arr)[j + 1] = (*arr)[j];
            j--;
        }
        (*arr)[j + 1] = x;
    }
}
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
}

int main()
{
    int arr[5] = {85, 22, 98, 36, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    BubbleSort(arr, n);
    printArray(arr, n);
    return 0;
}
