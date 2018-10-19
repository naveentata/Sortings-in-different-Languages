using System;

namespace SelectionSort
{
    class Program
    {

        public static void SelectionSort(int[] x)
        {
            int i, j;
            int min, temp;

            for (i = 0; i < x.Length - 1; i++)
            {
                min = i;
                for (j = i + 1; j < x.Length; j++)
                {
                    if (x[j] < x[min])
                    {
                        min = j;
                    }
                }
                temp = x[i];
                x[i] = x[min];
                x[min] = temp;
            }
        }

        static void Main()
        {
            int[] A = { 4, 26, 3, 44, 78, 777, 123, 435, 54, 43 }; // Random test data
            SelectionSort(A);
        }
    }
}
