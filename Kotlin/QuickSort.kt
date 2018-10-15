import java.util.*

object QuickSort {

    private fun partition(arr: IntArray, low: Int, high: Int): Int {
        val pivot = arr[high]
        var i = low - 1 // index of smaller element
        for (j in low until high) {
            // If current element is smaller than or
            // equal to pivot
            if (arr[j] <= pivot) {
                i++

                // swap arr[i] and arr[j]
                val tmp = arr[i]
                arr[i] = arr[j]
                arr[j] = tmp
            }
        }

        // swap arr[i+1] and arr[high]
        val tmp = arr[i + 1]
        arr[i + 1] = arr[high]
        arr[high] = tmp

        return i + 1
    }

    private fun quickSort(arr: IntArray, low: Int, high: Int) {
        if (low < high) {

            val pi = partition(arr, low, high)

            quickSort(arr, low, pi - 1)
            quickSort(arr, pi + 1, high)
        }
    }

    @JvmStatic
    fun main(args: Array<String>) {
        val arr = intArrayOf(10, 7, 8, 9, 1, 5)
        val n = arr.size

        quickSort(arr, 0, n - 1)

        arr.print()
    }
}

fun IntArray.print() {
    println(Arrays.toString(this))
}