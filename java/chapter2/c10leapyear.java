import java.util.Scanner;

public class c10leapyear {
    public static void main(String[] args) {
        
        int year;
        Scanner sc= new Scanner(System.in);
        System.out.println("Enter the year:");
        year=sc.nextInt();
        if (year%4==0) {
            System.out.println("Leap year");

            
        }
        else{
            System.out.println("its not a leap year");

        }
    }
}
