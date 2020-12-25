package quickSortPack;

public class quickSort {
    public static int partition(int arr[], int low, int high) {
        // select random element as pivot from array
        // I am selecting last as pivot
        int pivot = arr[high];
        int i = low; // iterate loop from low index
        while (i < high) {
            if (arr[i] < pivot) { // if current element is low than pivot
                int temp = arr[i]; // then shift to lowest position and increment
                arr[i] = arr[low]; // lowest position to add next lowest element
                arr[low] = temp;
                low++;
            }
            i++;
        }
        int temp = arr[high]; // swap highest element with pivot and
        arr[high] = arr[low]; // return pivot index.
        arr[low] = temp;

        return low;
    }

    public static void sort(int arr[], int low, int high) {
        if (low < high) {
            int pivot = partition(arr, low, high); // get the pivot element index
            sort(arr, low, pivot - 1); // sort left side of pivot
            sort(arr, pivot + 1, high); // sort right side of pivot
        }
    }
}