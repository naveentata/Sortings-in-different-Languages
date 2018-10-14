function mergeSort (array) {
    if (array.length < 2) return array
    else {
        let first = array.slice(0, Math.floor(array.length / 2))
        let last = array.slice(Math.floor(array.length / 2))
        first = mergeSort(first)
        last = mergeSort(last)

        let firstCounter = 0
        let lastCounter = 0
        let newArray = []

        while (firstCounter <= first.length - 1 && lastCounter <= last.length - 1) {
            if (first[firstCounter] < last[lastCounter]) {
                newArray.push(first[firstCounter])
                firstCounter += 1
            }
            else {
                newArray.push(last[lastCounter])
                lastCounter += 1
            }
        }

        if (firstCounter <= first.length - 1) newArray.push(...first.slice(firstCounter))
        else if (lastCounter <= last.length - 1) newArray.push(...last.slice(lastCounter))

        return newArray
    }
}
