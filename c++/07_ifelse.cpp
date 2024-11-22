#include<iostream>
using namespace std;

int main(){

    int score;
    cin>>score;

    if (score>80){
    
        cout<<"Well done!"<<endl;

    }
    else if (score>50){
    
        cout<<"can improve"<<endl;
    }
    else{
        cout<<"poor performance"<<endl;

    return 0;
    
    }
}