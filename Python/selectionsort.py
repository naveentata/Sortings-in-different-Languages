def selectionsort(a):
	n=len(a)
	for i in range(n):
		min=i
		for j in range(i+1,n):
			if(a[min]>a[j]):
				a[i],a[j]=a[j],a[min]


a=[64,25,12,22,11]
selectionsort(a)
for i in range(len(a)):
	print a[i],

