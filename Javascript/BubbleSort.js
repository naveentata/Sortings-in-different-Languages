function bubbleSort (array) {
    let sorted = false
    while (sorted !== true) {
        let swaps = 0
        for (let counter = 0; counter < array.length - 1; counter += 1) {
            if (array[counter] > array[counter + 1]) {
                let lastItem = array[counter]
                array[counter] = array[counter + 1]
                array[counter + 1] = lastItem
                swaps += 1
            }
        }
        if (swaps === 0) sorted = true
    }
    return array
}
