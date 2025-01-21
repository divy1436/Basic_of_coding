#include<stdio.h>  

int main() {
    int marks[10];  // Declare an array to store marks of 10 students

    // Ask the user to input marks for all 10 students
    printf("Enter the marks of 10 students:\n");
    for (int i = 0; i < 10; i++) {
        printf("Enter marks for student %d: ", i + 1);  // Prompt for each student's marks
        scanf("%d", &marks[i]);  // Read and store the marks in the array
    }

    // Display roll numbers of students whose marks are less than 35
    printf("Students with marks less than 35 have the following roll numbers:\n");
    for (int i = 0; i < 10; i++) {
        if (marks[i] < 35) {  // Check if the marks are below 35
            printf("Roll Number: %d\n", i + 1);  // Print the roll number (1-based indexing)
        }
    }

    return 0;  // Indicate successful program execution
}
