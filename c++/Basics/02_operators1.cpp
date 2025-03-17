#include<iostream>
using namespace std;

int main(){
    int num1 = 6;
    int num2 = 52;
//    Arithmetic  operator
    cout<<num1+num2<<endl;
    cout<<num1-num2<<endl;
    cout<<num1*num2<<endl;
    cout<<num1/num2<<endl;

    // Relational operator

    cout<<(num1==num2)<<endl;
    cout<<(num1!=num2)<<endl;
    cout<<(num1>=num2)<<endl;

//     Assignment operator

    num1+=5;
    cout<<num1<<endl;
    num2-=4;
    cout<<num2<<endl;

    return 0;

}
