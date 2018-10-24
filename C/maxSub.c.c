#include <stdio.h>
int MaxSubArraySum(int *,int,int);
int submidsum(int,int,int,int *);
int max(int,int,int);
int main(void) {
    int n;
    scanf("%d",&n);
    int arr[100];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int largest = MaxSubArraySum(arr,arr[0],arr[n-1]);
    printf("%d",largest);
    
	return 0;
}

int MaxSubArraySum(int* arr,int l,int r){
    if(l==r){
        return(l);
    }
    int mid = (l+r)/2;
    int largest_sum = max(submidsum(mid,l,r,arr),MaxSubArraySum(arr,l,mid),MaxSubArraySum(arr,mid+1,r));
    return largest_sum;
}
int submidsum(int m,int l,int r,int* arr){
    int temp= 0;
    int temp1 =0;
    int left_sum= arr[m];
    for(int i=m;i>l-1;i--){
        temp = temp + arr[i];
        if(temp>left_sum){
            left_sum = temp;
        }
    }
    int right_sum = arr[m+1];
    for(int j=m+1;j<r+1;j++){
         temp1=temp1+arr[j];
        if(temp1>right_sum){
            right_sum=temp1;
    }
    }
    int sub_sum = left_sum + right_sum;
    return sub_sum;
}
int max(int a, int b, int c){
   int d[3] = {a,b,c};
    d[0]=a;
    d[1]=b;
    d[2]=c;
    int max=d[0];
    for(int i=1;i<3;i++){
        if(max<d[i]){
            max=d[i];
        }
    }
    return max;
}

