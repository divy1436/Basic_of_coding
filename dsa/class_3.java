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
        

    }
}