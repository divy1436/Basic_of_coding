#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int sum = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] % 2 != 0) { 
            sum += arr[i];
        }
    }

    cout << "Sum of all odd numbers in arry: " << sum << endl;
    return 0;
}