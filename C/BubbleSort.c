#include <stdio.h>
void BubbleSort(int (*arr)[], int length)
{
    int i, swap = 1;
    while (swap)
    {
        swap = 0;
        for (i = 0; i < length - 1; i++)
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
int main()
{
    int arr[5] = {85, 22, 98, 36, 2};
    int n = sizeof(arr)/sizeof(arr[0]);
    BubbleSort(arr, n);
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}
