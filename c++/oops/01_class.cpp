#include <iostream>
#include <string>
using namespace std;
class Teacher{
    public:
    string name;
    string dept;
    string subject;
    double salary;
    void changeDept (string newDept){
        dept=newDept;
    }

};
int main(){
    Teacher t1;
    t1.name="divyanshu";
    t1.dept="CSE";
    t1.subject="Maths";
    t1.salary=500; 
    cout <<t1.name <<endl;
    return 0;

}