#include<stdio.h>
int main(){
    int n,fact=1;
    printf("Enter the no\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        fact = fact * i;
    }
    printf("%d",fact);
    return 0;
}