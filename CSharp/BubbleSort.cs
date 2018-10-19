using System;

namespace BubbleSort
{
    class Program
    {

        public static void bubbleSort(int[] x)
        {
            for (int pass = 1; pass < x.Length - 1; pass++)
            {
                // Count how many times this next loop
                // becomes shorter and shorter
                for (int i = 0; i < x.Length - pass; i++)
                {
                    if (x[i] > x[i + 1])
                    {
                        // Exchange elements
                        int temp = x[i];
                        x[i] = x[i + 1];
                        x[i + 1] = temp;
                    }
                }
            }
        }

        static void Main()
        {
            int[] A = { 4, 26, 3, 44, 78, 777, 123, 435, 54, 43 }; // Random test data
            bubbleSort(A);
        }
    }
}
