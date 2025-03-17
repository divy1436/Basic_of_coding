#include <iostream>
#include <string>
using namespace std;

class Teacher {
private:
    double salary; // hiding data

public:
    string name;
    string dept;
    string subject;


    // Setter for salary
    void setSalary(double s) {
        salary = s;
    }

    // Getter for salary
    double getSalary() {
        return salary;
    }

    void changeDept(string newDept) {
        dept = newDept;
    }
};

int main() {
    Teacher t1; // constructor call
    t1.name = "Divyanshu";
    t1.subject = "Maths";
    t1.setSalary(500); // Set salary using setter

    cout << "Name: " << t1.name << endl;
    cout << "Department: " << t1.dept << endl;
    cout << "Subject: " << t1.subject << endl;
    cout << "Salary: " << t1.getSalary() << endl;

    return 0;
}
