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

    // Constructor 
    //non parameterized
    // Teacher() {
    //     dept = "CSE";
    // }
    
    // parameterized
    Teacher(string n, string d, string s, double sal) {
        name=n;
        dept=d;
        subject=s;
        salary=sal;
        
    }


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

    void getInfo(){
        cout << "name : "<< name << endl;
        cout << "subject : "<< subject << endl;

    }
};

int main() {
    Teacher t1("divuyanshu maur", "CSE", "Maths", 520);
    t1.getInfo();


   

    return 0;
}
