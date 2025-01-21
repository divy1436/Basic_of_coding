#include<stdio.h>

int main() {
    int arr[10], i;
    
    // Asking the user to enter 10 numbers
    printf("Enter 10 numbers:\n");
    
    // Loop to take input for the array elements
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Displaying the elements of the array
    printf("Elements of the array are:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
