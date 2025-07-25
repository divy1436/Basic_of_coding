package dsa;

import java.util.Scanner;

public class class_1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter size of array: ");
        int n = sc.nextInt();

        int[] arr = new int[n];
        System.out.print("Enter array elements: ");
        for(int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }

        int sum = 0;
        for(int i = 0; i < n; i++) {
            if(arr[i] % 2 != 0) { // Check if the number is odd
                sum += arr[i];
            }
        }

        System.out.println("Sum of all odd numbers in array: " + sum);
    }
}