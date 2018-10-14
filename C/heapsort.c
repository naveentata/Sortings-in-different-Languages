// C program for heapsort

#include <stdio.h>

//swims the int at the pos int the heap
void swim(int arr[], int pos) {
    for (; pos > 1 && arr[pos / 2] < arr[pos]; pos /= 2) {
        int temp = arr[pos];
        arr[pos] = arr[pos / 2];
        arr[pos / 2] = temp;
    }
}

//sinks the int at the pos int the heap
void sink(int arr[], int size, int pos) {
    while (2 * pos <= size) {
        int child = 2 * pos;
        if (child < size && arr[child] < arr[child + 1]) {
            ++child;
        }
        if (arr[pos] >= arr[child]) {
            break;
        }
        int temp = arr[pos];
        arr[pos] = arr[child];
        arr[child] = temp;
        pos = child;
    }
}

//lifts up the maximum from the heap and restores heap condition
int delMax(int arr[], int size) {
    int min = arr[1];
    int val = arr[size];
    arr[1] = arr[size];
    arr[size] = -1;
    sink(arr, --size, 1);
    return min;

}

//inserts an element into the heap and restores the heap condition
void insertElement(int val, int arr[], int size) {
    arr[++size] = val;
    swim(arr, size);
}

// A utility function to print an array of size n 
int printArray(int arr[], int n) {

    int i;

    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");
}
//Function that executes a heapsort on the array
int heapsort(int arr[], int n) {
    int pq[n + 1];
    int i;
    for (i = 0; i < n; ++i) {
        insertElement(arr[i], pq, i);
    }
    i = i;
    for (; i > 0; --i) {
        arr[i - 1] = delMax(pq, i);
    }
}

//Test main-method
int main() {
    int arr[] = {2, 5, 7, 1, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    heapsort(arr, n);
    printArray(arr, n);
    return 0;
}