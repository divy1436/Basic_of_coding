class Student {
    int id;
    String name;

    // Instance method (not static) to access instance variables
    public void printDetails() {
        System.out.println("My id is " + id);
        System.out.println("and my name is " + name);
    }
}

public class c1_class {
    public static void main(String[] args) {
        System.out.println("This is a custom class");

        // Creating objects
        Student S1 = new Student();
        Student S2 = new Student();

        // Assigning values
        S1.id = 12;
        S1.name = "Divyanshu";
        S2.id = 44;
        S2.name ="Srajan";


        // Calling instance method
        S1.printDetails();
        S2.printDetails();
    }
}
