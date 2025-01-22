#include<stdio.h>

int main() {
    int matrix[2][3];  // Declare a 2D array with 2 rows and 3 columns

    // Input elements into the 2D array
    printf("Enter elements for a 2x3 matrix:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Enter element [%d][%d]:",i,j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Display the 2D array
    printf("\nMatrix elements:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");  // Newline for each row
    }

    return 0;
}
