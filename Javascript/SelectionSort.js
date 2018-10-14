function findMin (array) {
    let min = 0
    for (let counter = 1; counter < array.length; counter += 1) {
        if (array[counter] < array[min]) min = counter
    }
    return min
}

function selectionSort (array) {
    for (let counter = 0; counter < array.length; counter += 1) {
        let minLocation = findMin(array.slice(counter)) + counter
        if (minLocation !== counter) {
            let lastItem = array[counter]
            array[counter] = array[minLocation]
            array[minLocation] = lastItem
        }
    }
    return array
}
