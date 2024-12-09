import java.util.Scanner;

public class c9reportcard {
    public static void main(String[] args) {
        int m1,m2,m3;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the marks of maths");
        m1=sc.nextInt();
        System.out.println("Enter the marks of bee");
        m2=sc.nextInt();
        System.out.println("Enter the makrs of bme");
        m3=sc.nextInt();
        float avg = (m1 + m2 + m3) / 3.0f;
        System.out.println("The overall percentage of all three subjects is: " + avg + "%");
        if(avg>=40 && m1>=33 && m2>=33 && m3>=33){
            System.out.println("the student is pass");

        }
        else{
            System.out.println("the student is fail need improvment");
        }


    }
}
