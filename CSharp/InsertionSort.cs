using System;

namespace InsertionSort
{
    class Program
    {

        public static void InsertionSort(int[] x)
        {
            int n = x.Length - 1;
            int i, j, temp;

            for (i = 1; i <= n; ++i)
            {
                temp = x[i];
                for (j = i - 1; j >= 0; --j)
                {
                    if (temp < x[j]) x[j + 1] = x[j];
                    else break;
                }
                x[j + 1] = temp;
            }
        }

        static void Main()
        {
            int[] A = { 4, 26, 3, 44, 78, 777, 123, 435, 54, 43 }; // Random test data
            InsertionSort(A);
        }
    }
}
