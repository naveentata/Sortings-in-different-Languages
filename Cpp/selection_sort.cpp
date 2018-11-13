#include <iostream>

void print(int A[], std::size_t len)
{
    std::cout << ">>> A[";
    for(auto i(0u); i < len; i++)
	{
        std::cout << A[i] << " ";
    }
    std::cout << "], Size = " << len << "\n";
}

void insert_element(int A[], int & len, int N, int new_element)
{
    if(len == N) return;

    auto i(len-1);
    while( i >= 0 and new_element < A[i])
    {
        //Open hole
        A[i+1] = A[i];
        i--;
    }
    //Add new element
    A[i+1] = new_element;
    len++;
}

void selectionSort(int arr[],int size){
    int i,j;
    int min;  //index of smallest value in the unsorted array
​
    for(int i=0;i<size-1;i++){
        min=i;
        for(int j=i+1;j<size;j++){
            if(arr[j] < arr[min]){
                min=j;
            }
        }
        if(min!=i){
            int tmp=arr[min];
            arr[min]=arr[i];
            arr[i]=tmp;
        }
    }
}

int main()
{
    int A[10] = {5,7,3,9,2,1,8,4,6,10};

    int len = 10;

    std::cout << ">>> Before Insertion Sort -> Array A:\n";
    print(A, len);

    selection_sort(A,len);

    std::cout << ">>> After Insertion Sort -> Array A:\n";
    print(A, len);

    return 0;
}
