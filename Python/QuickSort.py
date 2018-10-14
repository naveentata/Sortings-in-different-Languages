def quickSort(array):
    if len(array) > 1:
        pivot = len(array) - 1
        smallArray = []
        bigArray = []
        for item in range(len(array) - 1):
            if array[item] <= array[pivot]:
                smallArray.append(array[item])
            else:
                bigArray.append(array[item])
        return quickSort(smallArray) + [array[pivot]] + quickSort(bigArray)
    else:
        return array
