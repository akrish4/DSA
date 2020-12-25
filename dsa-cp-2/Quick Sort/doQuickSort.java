import java.util.*;
import java.io.*;
import java.util.Scanner;
import quickSortPack.quickSort;

class doQuickSort {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the number of test cases : ");
        int tc = sc.nextInt();
        while (tc-- > 0) {
            System.out.print("Enter the size of array : ");
            int size = sc.nextInt();
            System.out.print("Enter the Elements of Array : ");
            int arr[] = new int[size];
            for (int i = 0; i < size; i++) {
                arr[i] = sc.nextInt();
            }
            // call the methode of sorting through quickSortPack package
            quickSort qs = new quickSort();
            qs.sort(arr, 0, size - 1);

            // print Array
            System.out.print("Sorted Array is : ");
            for (int i = 0; i < size; i++) {
                System.out.print(arr[i] + " ");
            }
            System.out.println();
        }
    }
}
