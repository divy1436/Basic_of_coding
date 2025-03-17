#include<iostream>
using namespace std;

int main(){
//   Misc  operator
    int a =4;
    cout<<sizeof(a)<<endl;

    char name= 'a';
    cout<<sizeof(name)<<endl;

    bool flag;
    a==name? flag =  true : flag=false;
    cout<<flag<<endl;

    cout<<(&a)<<endl;

// Post-pre incrememt operator

    int c=6;
    cout<<(c++)<<endl;
    cout<<(++c)<<endl;

    return 0;
}