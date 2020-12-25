package MaxHeap;

import java.util.Arrays;
import java.util.Scanner;

public class heap {
    public static void insert(int arr[], int size, int key) {
        if (size < arr.length) {
            arr[size] = key;
            while (size > 0) {
                if (size % 2 == 0) {
                    if (arr[size] > arr[(size - 2) / 2]) {
                        int temp = arr[size];
                        arr[size] = arr[(size - 2) / 2];
                        arr[(size - 2) / 2] = temp;
                        size = (size - 2) / 2;
                    } else {
                        break;
                    }
                } else {
                    if (arr[size] > arr[(size - 1) / 2]) {
                        int temp = arr[size];
                        arr[size] = arr[(size - 1) / 2];
                        arr[(size - 1) / 2] = temp;
                        size = (size - 1) / 2;
                    } else {
                        break;
                    }
                }
            }
        } else {
            System.out.println("elements are greater than Array size.");
        }
    }

    public static void heapify(int arr[], int size) {
        int i = 0;
        while (2 * i + 1 < size) {
            if (2 * i + 2 < size) {
                int n = arr[2 * i + 1] > arr[2 * i + 2] ? (2 * i + 1) : (2 * i + 2);
                if (arr[i] < arr[n]) {
                    int temp = arr[n];
                    arr[n] = arr[i];
                    arr[i] = temp;
                    i = n;
                } else {
                    break;
                }
            } else {
                if (arr[i] < arr[2 * i + 1]) {
                    int temp = arr[2 * i + 1];
                    arr[2 * i + 1] = arr[i];
                    arr[i] = temp;
                    i = 2 * i + 1;
                } else {
                    break;
                }
            }
        }
    }

    public static void sortMaxHeap(int arr[], int size) {
        int s = size;
        for (int i = 0; i < s + 1; i++) {
            int temp = arr[size];
            arr[size] = arr[0];
            arr[0] = temp;
            heapify(arr, size);
            size--;
        }
    }

    public static void printArray(int arr[], int size) {
        for (int i = 0; i <= size; i++) {
            System.out.print(arr[i] + " ");
        }
        System.out.println();
    }

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the size of Array : ");
        int s = sc.nextInt();
        int arr[] = new int[s];
        for (int i = 0; i < s; i++) {
            insert(arr, i, sc.nextInt());
        }
        sc.close();
        sortMaxHeap(arr, s - 1);
        printArray(arr, s - 1);
    }
}
