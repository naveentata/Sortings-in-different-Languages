class BogoSort
{
	// An optimized version of Bubble Sort
	static void bogosort(int[] arr)
	{
		while(!isSorted(arr))
		{
			shuffle(arr);
		}
	}

	static boolean isSorted(int[] arr) {
		for(int i = 0; i < arr.length - 1; ++i) {
			if(arr[i] > arr[i+1]) {
				return false;
			}
		}
		return true;
	}

	//Shuffle Array
	static void shuffle(int[] arr) {
		for(int i = 0; i < arr.length; ++i) {
			int index1 = (int) (Math.random() * arr.length),
					index2 = (int) (Math.random() * arr.length);
			int a = arr[index1];
			arr[index1] = arr[index2];
			arr[index2] = a;
		}
	}

	// Function to print an array
	static void printArray(int arr[])
	{
		int i;
		for (i = 0; i < arr.length - 1; ++i)
			System.out.print(arr[i] + " ");
		System.out.println();
	}

	// Driver program
	public static void main(String args[])
	{
		int arr[] = { 64, 34, 25, 12, 22, 11, 90 };
		bogosort(arr);
		System.out.println("Sorted array: ");
		printArray(arr);
	}
}
