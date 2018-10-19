using System;

namespace QuickSort
{
    class Program
    {

        public static void QuickSort(int[] x)
    {
        qs(x, 0, x.Length - 1);
    }

    public static void qs(int[] x, int left, int right)
    {
        int i, j;
        int pivot, temp;

        i = left;
        j = right;
        pivot = x[(left + right) / 2];

        do
        {
            while ((x[i] < pivot) && (i < right)) i++;
            while ((pivot < x[j]) && (j > left)) j--;

            if (i <= j)
            {
                temp = x[i];
                x[i] = x[j];
                x[j] = temp;
                i++; j--;
            }
        } while (i <= j);

        if (left < j) qs(x, left, j);
        if (i < right) qs(x, i, right);
    }

        static void Main()
        {
            int[] A = { 4, 26, 3, 44, 78, 777, 123, 435, 54, 43 }; // Random test data
            QuickSort(A);
        }
    }
}
