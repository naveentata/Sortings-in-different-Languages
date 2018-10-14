#include <iostream>
using namespace std;

void shellSort(int arr[], int n){
    int h=1,temp;
    
    while(3*h+1<n){
        h=3*h+1;
    }
    
    while(h>0){
        for(int i=h;i<n;i++){
            for(int j=i;j>=h;j-=h){
                if(arr[j]<arr[j-h]){
                    temp=arr[j];
                    arr[j]=arr[j-h];
                    arr[j-h]=temp;
                }
                else{
                    break;
                }
            }
        }
      
        cout<<endl;
        h/=3;   
    }
}

int main() {
	int n = 10;
	
	int arr[n] = {10, 5, 3, 1, 2, 6, 4, 8, 7, 9};
    
    shellSort(arr,n);
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
	return 0;
}
