#include<stdio.h>  

int  23main() {
    // Declare and initialize an array with 10 elements
    int marks[10] = {90, 56, 2, 45, 35, 20, 85, 4, 6, 65};

    // Loop to iterate through the elements of the array
    for (int i = 0; i < 10; i++) { 
        // Check if the current element is less than 35
        if (marks[i] < 35) {
            // Print the index of the element that satisfies the condition
            printf("%d ", i);  
        }
    }

    return 0;  
}
