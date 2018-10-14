def bubbleSort(arr): 
    #Loops through all elements
    for i in range(len(arr)):
        #Last elements are already placed 
        for j in range(0, len(arr)-i-1):
            if arr[j] > arr[j+1] : 
                arr[j], arr[j+1] = arr[j+1], arr[j] 
  
arr = [86,59,62,72,48,30,45] 
  
bubbleSort(arr) 
  
print ("Sorted array is:",end = " ")
print(arr)