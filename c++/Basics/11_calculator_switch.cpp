#include<iostream>
using namespace std;

int main(){

int n1 , n2;
cout<<"Enter 2 intergers: ";
cin>>n1>>n2;

cout<<"Enter an operator(+,-,*,/):";
char op;
cin>>op;

switch (op){
    case '+':
    cout<<"Sum is :"<<n1+n2<<endl;
    break;

     case '-':
    cout<<"sub is :"<<n1-n2<<endl;
    break;

     case '*':
    cout<<"multipicilation is :"<<n1*n2<<endl;
    break;

     case '/':
    cout<<"divide is :"<<n1/n2<<endl;
    break;

    default:
    cout<<"this operator is not vaild"<<endl;

}
return 0;
}