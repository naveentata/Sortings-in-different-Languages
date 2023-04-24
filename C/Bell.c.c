#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	int u[100];
	int v[100];
	int w[100];
	for(int i=0;i<t;i++){
	    scanf("%d",&u[i]);
	    scanf("%d",&v[i]);
	    scanf("%d",&w[i]);
	}
	int V;
	scanf("%d",&V);
	int arr[V];
	for(int i=0;i<V;i++){
	    arr[i]=2147483647;
	}
    int src;
    scanf("%d",&src);
    arr[src]=0;
    for(int j=0;j<V-1;j++){
        for(int k=0;k<t;k++){
            if(arr[u[k]]!=2147483647 && arr[u[k]]+w[k] < arr[v[k]]){
                arr[v[k]] = arr[u[k]] + w[k];
            }
        }
    }
    for(int p=0;p<1;p++){
        if(arr[u[p]]!=2147483647 && arr[u[p]]+w[p] < arr[v[p]]){
            printf("Negative cycle detected");
        }
    }
    for(int i=0;i<V;i++){
    printf("%d",arr[i]);
    }
	return 0;
}

