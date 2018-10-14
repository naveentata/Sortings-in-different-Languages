function quickSort (array) {
    if (array.length > 1) {
        let pivot = array.length - 1
        let smallArray = []
        let bigArray = []
        for (let item = 0; item < array.length - 1; item += 1) {
            if (array[item] <= array[pivot]) smallArray.push(array[item])
            else bigArray.push(array[item])
        }

        return quickSort(smallArray).concat([array[pivot]], quickSort(bigArray))
    }
    else return array
}
