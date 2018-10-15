import java.util.*

object BubbleSort {
    // An optimized version of Bubble Sort
    fun bubbleSort(arr: IntArray, n: Int) {
        var i: Int
        var j: Int
        var temp: Int
        var swapped: Boolean
        i = 0
        while (i < n - 1) {
            swapped = false
            j = 0
            while (j < n - i - 1) {
                if (arr[j] > arr[j + 1]) {
                    // swap arr[j] and arr[j+1]
                    temp = arr[j]
                    arr[j] = arr[j + 1]
                    arr[j + 1] = temp
                    swapped = true
                }
                j++
            }

            // IF no two elements were
            // swapped by inner loop, then break
            if (!swapped)
                break
            i++
        }
    }

    @JvmStatic
    fun main(args: Array<String>) {
        val arr = intArrayOf(64, 34, 25, 12, 22, 11, 90)
        val n = arr.size
        bubbleSort(arr, n)
        println("Sorted array: ")
        arr.print()
    }
}

fun IntArray.print() {
    println(Arrays.toString(this))
}
