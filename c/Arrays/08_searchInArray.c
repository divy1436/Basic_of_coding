#include <stdio.h>
#define MAX 100  // Maximum size of the array

int main() {
    int arr[MAX], n, i, searchElement, found = 0;

    // Input: Size of the array
    printf("Enter the number of elements (up to %d): ", MAX);
    scanf("%d", &n);

    // Check if the size is valid
    if (n > MAX || n <= 0) {
        printf("Invalid size! Please enter a number between 1 and %d.\n", MAX);
        return 1;  // Exit the program
    }

    // Input: Array elements
    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input: Element to search
    printf("Enter the number to search: ");
    scanf("%d", &searchElement);

    // Linear Search
    for (i = 0; i < n; i++) {
        if (arr[i] == searchElement) {
            printf("Element %d found at position %d (index %d).\n", searchElement, i + 1, i);
            found = 1;  // Mark as found
            break;      // Stop searching after finding the element
        }
    }

    // If the element was not found
    if (!found) {
        printf("Element %d is not in the array.\n", searchElement);
    }

    return 0;
}
