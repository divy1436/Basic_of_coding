#include<iostream>
using namespace std;

int main(){

int n;
cin>>n;

// Upper part of the diamond

for(int i=1;i<=n;i++){
    for(int j=1;j<=n-i;j++){
        cout<<" ";
    }
    for(int j=1;j<=i;j++){
        cout<<"* ";
    }
    cout<<endl;
}
//lowe part of the daimond
for(int i=n-1;i>=1;i--){
    for(int j=1;j<=n-i;j++){
        cout<<" ";

    }
    for(int j=1;j<=i;j++){
        cout<<"* ";
    }
    
    cout<<endl;
}
    return 0;
}
