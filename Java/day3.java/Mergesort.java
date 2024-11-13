import java.util.Arrays;

public class Mergesort {

    // Main merge sort function
    public static void mergeSort(int[] arr) {
        if (arr.length < 2) {
            return;  // Base case: if array has 0 or 1 element, it's already sorted
        }

        // Find the middle point to divide the array into two halves
        int mid = arr.length / 2;

        // Create two sub-arrays
        int[] left = Arrays.copyOfRange(arr, 0, mid);
        int[] right = Arrays.copyOfRange(arr, mid, arr.length);

        // Recursively sort both halves
        mergeSort(left);
        mergeSort(right);

        // Merge the sorted halves
        merge(arr, left, right);
    }

    // Merge two sorted arrays into a single sorted array
    private static void merge(int[] arr, int[] left, int[] right) {
        int i = 0, j = 0, k = 0;

        // Compare elements of left and right subarrays and merge them in sorted order
        while (i < left.length && j < right.length) {
            if (left[i] <= right[j]) {
                arr[k++] = left[i++];
            } else {
                arr[k++] = right[j++];
            }
        }

        // If any elements remain in the left subarray, add them to the result
        while (i < left.length) {
            arr[k++] = left[i++];
        }

        // If any elements remain in the right subarray, add them to the result
        while (j < right.length) {
            arr[k++] = right[j++];
        }
    }

    // Main method to test merge sort
    public static void main(String[] args) {
        int[] arr = {12, 11, 13, 5, 6, 7};
        System.out.println("Original array: " + Arrays.toString(arr));

        mergeSort(arr);

        System.out.println("Sorted array: " + Arrays.toString(arr));
    }
}
