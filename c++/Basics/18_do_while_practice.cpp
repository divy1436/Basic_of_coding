#include<iostream>
using namespace std;

int main(){
// Calculate the sum of the first n natural numbers.


 /*   int n, sum =0 , i=1;
    cout<<"Enter a postive number:";
    cin>>n;

    do{
        sum+=i;
        i++;


    }while(i<=n);
    cout<<"sum = "<<sum<<endl;
*/

int choice, a, b;
    do {
        cout << "Menu:\n";
        cout << "1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice >= 1 && choice <= 4) {
            cout << "Enter two numbers: ";
            cin >> a >> b;
        }

        switch (choice) {
            case 1: cout << "Result: " << a + b << endl; break;
            case 2: cout << "Result: " << a - b << endl; break;
            case 3: cout << "Result: " << a * b << endl; break;
            case 4: 
                if (b != 0)
                    cout << "Result: " << (float)a / b << endl;
                else
                    cout << "Cannot divide by zero." << endl;
                break;
            case 5: cout << "Exiting program..." << endl; break;
            default: cout << "Invalid choice!" << endl;
        }
    } while (choice != 5);


    return 0;
}