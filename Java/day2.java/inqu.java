public class InsertionSort {

    // Method to perform Insertion Sort
    public static void insertionSort(int[] arr) {
        // Iterate over the array starting from the second element
        for (int i = 1; i < arr.length; i++) {
            int key = arr[i]; // Element to be inserted into the sorted portion of the array
            int j = i - 1;

            // Move elements of arr[0..i-1], that are greater than the key, to one position ahead of their current position
            while (j >= 0 && arr[j] > key) {
                arr[j + 1] = arr[j];
                j = j - 1;
            }

            // Place the key in the correct position
            arr[j + 1] = key;
        }
    }

    // Utility method to print an array
    public static void printArray(int[] arr) {
        for (int i : arr) {
            System.out.print(i + " ");
        }
        System.out.println();
    }

    // Main method to test the insertion sort
    public static void main(String[] args) {
        int[] arr = {12, 11, 13, 5, 6};
        
        System.out.println("Original array:");
        printArray(arr);

        insertionSort(arr);

        System.out.println("Sorted array:");
        printArray(arr);
    }
}
