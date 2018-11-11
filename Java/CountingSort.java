import java.util.Scanner;
 
/** Class CountingSort **/
public class CountingSort 
{
    private static final int MAX_RANGE = 1000000;
    /** Counting Sort function **/
    public static void sort( int[] arr )
    {
        int N = arr.length;
        if (N == 0)
            return;
        /** find max and min values **/
        int max = arr[0], min = arr[0];
        for (int i = 1; i < N; i++)
        {
            if (arr[i] > max)
                max = arr[i];
            if (arr[i] < min)
                min = arr[i];
        }
        int range = max - min + 1;
 
        /** check if range is small enough for count array **/
        /** else it might give out of memory exception while allocating memory for array **/
        if (range > MAX_RANGE)
        {
            System.out.println("\nError : Range too large for sort");
            return;
        }
 
        int[] count = new int[range];
        /** make count/frequency array for each element **/
        for (int i = 0; i < N; i++)
            count[arr[i] - min]++;
        /** modify count so that positions in final array is obtained **/
        for (int i = 1; i < range; i++)
            count[i] += count[i - 1];
        /** modify original array **/
        int j = 0;
        for (int i = 0; i < range; i++)
            while (j < count[i])
                arr[j++] = i + min;
    }    
    /** Main method **/
    public static void main(String[] args) 
    {
        Scanner scan = new Scanner( System.in );        
        System.out.println("Counting Sort Test\n");
        int n, i;
        /** Accept number of elements **/
        System.out.println("Enter number of integer elements");
        n = scan.nextInt();
        /** Create integer array on n elements **/
        int arr[] = new int[ n ];
        /** Accept elements **/
        System.out.println("\nEnter "+ n +" integer elements");
        for (i = 0; i < n; i++)
            arr[i] = scan.nextInt();
        /** Call method sort **/
        sort(arr);
        /** Print sorted Array **/
        System.out.println("\nElements after sorting ");        
        for (i = 0; i < n; i++)
            System.out.print(arr[i]+" ");            
        System.out.println();                     
    }    
}



// Counting Sort Test
 
// Enter number of integer elements
// 20
 
// Enter 20 integer elements
// 54 67 13 24 76 37 97 10 67 24 6 28 5 19 63 1 71 83 97 24
 
// Elements after sorting
// 1 5 6 10 13 19 24 24 24 28 37 54 63 67 67 71 76 83 97 97