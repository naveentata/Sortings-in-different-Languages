#include<stdio.h>
void main()
{
	int i=0,n;
	int a[100];
	printf("Enter the no of elements: ");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	bubblesort(a,n);
	void bubblesort(int a[],int n)
	{
		//int swap;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n-i-1;j++)
			{
				if(a[j]>a[j+1])
				{
					swap(a[j],a[j+1]);
				}
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		printf("After Sorting");
		printf("%d",&a[i]);
	}
}

void swap(int x,int y)
{
	int temp;
	temp = x;
	x = y;
	y = temp;
}
