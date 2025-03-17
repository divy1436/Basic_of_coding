#include<iostream>
using namespace std;

// Function definition


int add(int num1, int num2){
    int sum=num1+num2;
    return sum;

}

int add(int num1, int num2, int num3){
    int sum=num1+num2+num3;
    return sum;

}
float add(float num1, float num2){
    float sum=num1+num2;
    return sum;
}

int main(){
    int a=5;
    int b=7;
    float c=5.6;
    float d=3.6;
    cout<<add(a,b,1)<<endl;

    cout<<add(c,d)<<endl;

    return 0;

}
