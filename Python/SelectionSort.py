def findMin(array):
    min = 0
    for counter in range(1, len(array)):
        if array[counter] < array[min]:
            min = counter
    return min


def selectionSort(array):
    for counter in range(len(array)):
        minLocation = findMin(array[counter:]) + counter
        if minLocation != counter:
            lastItem = array[counter]
            array[counter] = array[minLocation]
            array[minLocation] = lastItem
    return array
