#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    
    // Get input strings
    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);

    // Find and print the lengths
    printf("Length of first string: %zu\n", strlen(str1));
    printf("Length of second string: %zu\n", strlen(str2));

    // Copy the first string to another
    char copy[100];
    strcpy(copy, str1);
    printf("Copy of the first string: %s\n", copy);

    // Concatenate second string to the first
    strcat(str1, str2);
    printf("Concatenated string: %s\n", str1);

    // Compare the strings
    int result = strcmp(str1, str2);
    if (result == 0) {
        printf("Both strings are equal!\n");
    } else {
        printf("Strings are not equal. (Result: %d)\n", result);
    }

    // Search for a character
    char *found = strchr(str1, 'o');
    if (found != NULL) {
        printf("Found 'o' at position: %ld\n", found - str1);
    } else {
        printf("'o' not found in the string.\n");
    }

    return 0;
}
