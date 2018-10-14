function insertionSort (array) {
    for (let itemCounter = 0; itemCounter < array.length; itemCounter += 1) {
        let item = array[itemCounter]
        let locationCounter = 0
        while (item > array[locationCounter]) locationCounter += 1
        for (let counter = itemCounter; counter > locationCounter; counter -= 1) array[counter] = array[counter - 1]
        array[locationCounter] = item
    }
    return array
}
