import java.util.Scanner;

public class result_03 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Total marks of the subject");
        Float marks = sc.nextFloat();
        System.out.println("english");
        Float sub1 = sc.nextFloat();
        System.out.println("hindi");
        Float sub2 = sc.nextFloat();
        System.out.println("maths");
        Float sub3 = sc.nextFloat();
        System.out.println("bee");
        Float sub4 = sc.nextFloat();
        System.out.println("total marks");
        Float sum = sub1+sub2+sub3+sub4;
        System.out.println(sum);
        Float average = sum*100.F/400.F;
        System.out.println("total percentage is " + average);
    }
}
