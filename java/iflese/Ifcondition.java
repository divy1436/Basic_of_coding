package java.iflese;
public class Ifcondition{
    public static void main(String[] args){
        int salary = 5000;
        if(salary >3000){
            salary += 1000;

        }
        else{
            salary += 500;
        }
        System.out.println("Salary is: " + salary );
    }

}