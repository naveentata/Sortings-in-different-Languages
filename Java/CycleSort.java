import java.util.*;
public class CycleSort   
{  
static void sort(int a[], int n)  
{  
    int writes = 0,start,element,pos,temp,i;  
   
    for (start = 0; start <= n - 2; start++) {  
        element = a[start];  
        pos = start;  
        for (i = start + 1; i < n; i++)  
            if (a[i] < element)  
                pos++;  
        if (pos == start)  
            continue;  
        while (element == a[pos])  
            pos += 1;  
        if (pos != start) {  
            //swap(element, a[pos]);  
        temp = element;  
        element = a[pos];  
            a[pos] = temp;    
            writes++;  
        }  
        while (pos != start) {  
            pos = start;  
            for (i = start + 1; i < n; i++)  
                if (a[i] < element)  
                    pos += 1;  
            while (element == a[pos])  
                pos += 1;  
            if (element != a[pos]) {  
              temp = element;  
          element = a[pos];  
              a[pos] = temp;    
                writes++;  
            }  
        }  
    }  
}  
public static void main(String[] args)  
{  
    Scanner sc=new Scanner(System.in);
    System.out.println("Enter number of elements: ");
    int n1=sc.nextInt();
    int[] a=new int[n1];
    for(int i=0;i<n1;i++)
    {
        a[i]=sc.nextInt();
    } 
    int n = a.length,i;  
    sort(a, n);  
    System.out.println("After sort, array : ");  
    for (i = 0; i < n; i++)  
        System.out.println(a[i]);  
      
}  
}  
