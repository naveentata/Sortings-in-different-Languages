#include <iostream>
using namespace std;

void print(int arr[], int n){
    for(int i=0; i<n; i++)
        cout<<(char)arr[i]<<' ';
    cout<<endl;
}

void exchange(int arr[], int i, int j){
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}

void sink(int arr[], int k, int n){
    int j;
    while(2*k+1 < n){
        j=2*k+1;

        if(j<n-1 and arr[j] < arr[j+1])
            j++;

        if(arr[k] >= arr[j])
            break;
        exchange(arr, k, j);
        k=j;
    }
}

void buildMaxHeap(int arr[], int n){
    for(int i=(n-2)/2; i>=0; i--)
        sink(arr, i, n);
}

void heapSort(int arr[], int n){
    buildMaxHeap(arr, n);
    
    cout<<"Heapified array"<<endl;
    print(arr, n);
    
    while(n > 1) {
        exchange(arr, 0, n-1);
        n--;
        sink(arr, 0, n);
    }
}

int main() {
	int n = 11;
	int arr[n] = {'S', 'O', 'R', 'T', 'E', 'X', 'A', 'M', 'P', 'L', 'E'};
	cout<<"Unsorted array"<<endl;
	print(arr, n);

	heapSort(arr, n);
    
    cout<<"Sorted array"<<endl;
	print(arr, n);

	return 0;
}