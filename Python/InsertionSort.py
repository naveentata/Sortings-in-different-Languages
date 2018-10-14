def insertionSort(array):
    for itemCounter in range(len(array)):
        item = array[itemCounter]
        locationCounter = 0
        while item > array[locationCounter]:
            locationCounter += 1

        for i in reversed(range(locationCounter, itemCounter + 1)):
            array[i] = array[i - 1]

        array[locationCounter] = item

    return array
