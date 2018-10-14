#include <stdio.h>
void BubbleSort(int (*arr)[], int size)
{
    int i, swap = 1;
    while (swap)
    {
        swap = 0;
        for (i = 0; i < size - 1; i++)
        {
            if ((*arr)[i] > (*arr)[i + 1])
            {
                int save = (*arr)[i];
                (*arr)[i] = (*arr)[i + 1];
                (*arr)[i + 1] = save;
                swap = 1;
            }
        }
    }
}
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("n");
}

int main()
{
    int arr[5] = {85, 22, 98, 36, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    BubbleSort(arr, n);
    printArray(arr, n);
    return 0;
}
