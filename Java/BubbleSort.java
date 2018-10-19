import java.io.*; 
import java.util.Scanner;
  
class BubbleSort  
{ 
    // An optimized version of Bubble Sort 
    static void bubbleSort(int arr[], int n) 
    { 
        int i, j, temp; 
        boolean swapped; 
        for (i = 0; i < n - 1; i++)  
        { 
            swapped = false; 
            for (j = 0; j < n - i - 1; j++)  
            { 
                if (arr[j] > arr[j + 1])  
                { 
                    // swap arr[j] and arr[j+1] 
                    temp = arr[j]; 
                    arr[j] = arr[j + 1]; 
                    arr[j + 1] = temp; 
                    swapped = true; 
                } 
            } 
  
            // IF no two elements were  
            // swapped by inner loop, then break 
            if (swapped == false) 
                break; 
        } 
    } 
  
    // Function to print an array  
    static void printArray(int arr[], int size) 
    { 
        int i; 
        for (i = 0; i < size; i++) 
            System.out.print(arr[i] + " "); 
        System.out.println(); 
    } 
  
    // Driver program 
    public static void main(String args[]) 
    { 
        Scanner sc=new Scanner (System.in);
        System.out.println("Enter the number of elements to be entered to the array: ");
        int n=sc.nsextInt();
        System.out.println("Enter "+n+" elements to be sorted to the array: ");
        for(int i=0;i<n;i++)
        int arr[i] =sc.nextInt(); 
        bubbleSort(arr, n); 
        System.out.println("The Sorted array: "); 
        printArray(arr, n); 
    } 
} 
