import java.util.*

object InsertionSort {
    fun insertionSort(arr: IntArray) {
        (1 until arr.size).forEach { i ->
            val tmp = arr[i]
            var j = i - 1

            while (j >= 0 && arr[j] > tmp) {
                arr[j + 1] = arr[j]
                j = j - 1
            }
            arr[j + 1] = tmp
        }
    }

    @JvmStatic
    fun main(args: Array<String>) {
        val arr = intArrayOf(12, 11, 13, 5, 6)
        insertionSort(arr)
        arr.print()
    }
}

fun IntArray.print() {
    println(Arrays.toString(this))
}
