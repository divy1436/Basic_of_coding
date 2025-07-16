import java.util.Scanner;

//package java.crt_question;

public class Operator1 {
    public Operator1() {

    }

    public static void main(String[] args) {
        int length, breadth;
        Scanner sc = new Scanner(System.in);
        // System.out.println("Enter the length of the rope");
        length = sc.nextInt();
        // System.out.println("Enter the breadth of the rope");
        breadth = sc.nextInt();
        int per = 2 * (length + breadth);
        int area = length * breadth;
        System.out.println("The required length is " + per + " m");
        System.out.println("The required area of carpet is " + area + " sqm");
    }
}
