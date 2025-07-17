package dsa;
import java.util.Scanner;

public class class_3 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        // Fixed array size
        int[] arr = new int[51]; // 50 elements + 1 for insertion
        int n = 50; // Already known

        // Input 50 array elements
        System.out.println("Enter 50 elements:");
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }

        // Input new element and position
        System.out.print("Enter element to insert: ");
        int newElement = sc.nextInt();
        System.out.print("Enter position (0-based index from 0 to 50): ");
        int pos = sc.nextInt();

        // Shift elements to the right
        for (int i = n; i > pos; i--) {
            arr[i] = arr[i - 1];
        }

        // Insert new element
        arr[pos] = newElement;

        // Print updated array
        System.out.print("Array after insertion: ");
        for (int i = 0; i <= n; i++) {
            System.out.print(arr[i] + " ");
        }

        sc.close();
    }
}
