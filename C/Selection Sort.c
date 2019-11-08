#include <stdio.h>
 
int main()
{
  int array[100], n, c, d, position, swap; // declaration of variables
 
  printf("Enter number of elements\n");
  scanf("%d", &n); // size of array
 
  printf("Enter %d integers\n", n);
 
  for (c = 0; c < n; c++)
    scanf("%d", &array[c]);
 
  for (c = 0; c < (n - 1); c++)
  {
    position = c;
   
    for (d = c + 1; d < n; d++)
    {
      if (array[position] > array[d])
        position = d;
    }
    if (position != c) // used to sort the array 
    {
      swap = array[c];
      array[c] = array[position]; // swapping elements
      array[position] = swap;
    }
  }
 
  printf("Sorted list in ascending order:\n");
 
  for (c = 0; c < n; c++)
    printf("%d\n", array[c]); // prints the sorted list 
 
  return 0;
}
