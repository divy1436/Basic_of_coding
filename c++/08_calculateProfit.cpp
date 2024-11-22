#include <iostream>
using namespace std;
// Write a program to take input from user for cost price and selling
//and calculate profit or  loss
int main() {
    
    int sp,cp;
    cout<<"Enter selling price: ";
    cin>>sp;
    cout<<"Enter cost price: ";
    cin>>cp;

    if(sp>cp){
        int profit = sp-cp;
        cout<<"Your profit is: "<<profit<<endl;
    }
    else if(cp>sp){
        int loss = cp-sp;
        cout<<"Your lose is:"<<loss<<endl;    
        }
        else{
            cout<<"No profit or loss"<<endl;

            return 0;

        }
}