package Java;

public class CountingSort {

    public void countingSort(int[] array) {
        if(isInvalid(array)) {
            return;
        }

        int max = getMax(array);
        int[] countingArray = new int[max + 1];
        int[] sorted = new int[array.length];

        for (int i = 0; i < array.length; i++) {
            countingArray[array[i]]++;
        }

        for (int i = 1; i < countingArray.length; i++) {
            countingArray[i] += countingArray[i - 1];
        }

        for (int i = 0; i < array.length; i++) {
            countingArray[array[i]]--;
            int sortedArrayIndex = countingArray[array[i]];
            sorted[sortedArrayIndex] = array[i];
        }

        copyArray(array, sorted);
    }

    private void copyArray(int[] array, int[] sorted) {
        for (int i = 0; i < array.length; i++) {
            array[i] = sorted[i];
        }
    }


    private boolean isInvalid(int[] array) {
        for (int i = 0; i < array.length; i++) {
            if (array[i] < 0 || array[i] == Integer.MAX_VALUE)
                return true;
        }

        return false;
    }

    private int getMax(int[] array) {
        int max = Integer.MIN_VALUE;

        for (int i = 0; i < array.length; i++) {
            max = Math.max(array[i], max);
        }
        return max;
    }
}
