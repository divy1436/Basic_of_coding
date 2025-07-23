import java.util.Scanner;

public class greaterthan {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter the 3 integers:");
        int a = sc.nextInt();
        int b = sc.nextInt();
        int c = sc.nextInt();

        // Find the greatest number
        if(a >= b && a >= c) {
            System.out.println("Greatest is: " + a);
        } else if(b >= a && b >= c) {
            System.out.println("Greatest is: " + b);
        } else {
            System.out.println("Greatest is: " + c);
        }
    }
}


