import java.util.*;

public class CocktailShakerSort.java 
{
    static int[] cocktailShakerSort(int[] arr)
    {
        int begin = 0; //minimum index to be sorted to
        int end = arr.length - 1; //maximum index to be sorted to
        int i = 0; //index being evaluated
        
        while(begin <= end) //loops until all elements have been taken to the apropriate index
        {
            while(i < end) //brings greatest data to the end
            {
                if(arr[i] > arr[i+1]) //swap
                {
                    arr[i] = arr[i] + arr[i+1]; //x = x+y
                    arr[i+1] = arr[i] - arr[i+1];//y = x-y
                    arr[i] = arr[i] - arr[i+1]; //x = x - y
                }
                i++;
            }
            
            end--;
            
            while(i > begin) //brings smallest data to the beggining
            {
                if(arr[i] < arr[i-1]) //swap
                {
                    arr[i] = arr[i] + arr[i-1]; //x = x+y
                    arr[i-1] = arr[i] - arr[i-1];//y = x-y
                    arr[i] = arr[i] - arr[i-1]; //x = x - y
                }
                i--;
            }
            
            begin++;
        }
        
        return arr;
    }
    
    public static void main(String[] args) 
    {
	   int[] arr = {93, 43, 43, 67, 11, 99, 102};
	   System.out.println(Arrays.toString(cocktailShakerSort(arr)));
    }
}
