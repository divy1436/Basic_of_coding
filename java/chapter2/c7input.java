import java.util.Scanner;

public class c7input {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the radius");
        int radius;
        radius = sc.nextInt();
        double pi = 3.14;
        double area = pi * radius * radius;
        System.out.println("the area of circle is" + area);


    }
    
}
