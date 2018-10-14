def mergeSort(array):
    if len(array) < 2:
        # if smallest Possible, hence sorted, return
        return array
    else:
        # break into half then break again
        first = array[:len(array) // 2]
        last = array[(len(array) // 2):]
        first = mergeSort(first)
        last = mergeSort(last)

        firstCounter = 0
        lastCounter = 0
        array = []
        # either first element of one or the other will be the largest so
        # compare and keep appending
        while firstCounter <= len(first) - 1 and lastCounter <= len(last) - 1:
            if first[firstCounter] < last[lastCounter]:
                array.append(first[firstCounter])
                firstCounter += 1
            else:
                array.append(last[lastCounter])
                lastCounter += 1

        # if any are still not appended
        if firstCounter <= len(first) - 1:
            array += first[firstCounter:]

        elif lastCounter <= len(last) - 1:
            array += last[lastCounter:]

        return array
