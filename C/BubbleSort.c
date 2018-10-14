#include <stdio.h>
void BubbleSort(int (*tab)[], int length)
{
    int i, swap = 1;
    while (swap)
    {
        swap = 0;
        for (i = 0; i < length - 1; i++)
        {
            if ((*tab)[i] > (*tab)[i + 1])
            {
                int save = (*tab)[i];
                (*tab)[i] = (*tab)[i + 1];
                (*tab)[i + 1] = save;
                swap = 1;
            }
        }
    }
}
int main()
{
    int t[5] = {85, 22, 98, 36, 2};
    BubbleSort(t, 5);
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("%d\n", t[i]);
    }
    return 0;
}
