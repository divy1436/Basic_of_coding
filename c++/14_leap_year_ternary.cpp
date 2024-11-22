#include<iostream>
using namespace std;

int main(){
    int year;
    cout<<"enter a year  ";
    cin>>year;

    string isLeap =(year % 4 == 0 &&(year % 100!=0 ||year %400 == 0))? "leap year":"not a leap year";
    cout<<year<<": is a "<<isLeap <<endl;

    return 0;
}
