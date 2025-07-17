package dsa;

import java.util.Scanner;

public class class_3 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        // Input array size and elements
        System.out.print("Enter size of array: ");
        int n = sc.nextInt();
        int[] arr = new int[n + 1]; // Extra space for new element

        System.out.print("Enter array elements: ");
        for(int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }

        // Input element to insert and position
        System.out.print("Enter element to insert: ");
        int y = sc.nextInt();
        System.out.print("Enter position (0-based index): ");
        int pos = sc.nextInt();

        // Shift elements to the right from position
        for(int i = n; i > pos; i--) {
            arr[i] = arr[i - 1];
        }
        arr[pos] = y;

        // Print updated array
        System.out.print("Array after insertion: ");
        for(int i = 0; i < n + 1; i++) {
            System.out.print(arr[i] + " ");
        }
    }
}
