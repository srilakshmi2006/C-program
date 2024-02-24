#include <stdio.h>

int main() {
    int rows, i, j;

    // Set the number of rows for the diamond
    rows = 5;  // You can change this value as needed

    // Print the upper part of the diamond
    for (i = 1; i <= rows; ++i) {
        // Print spaces for indentation
        for (j = 1; j <= rows - i; ++j) {
            printf(" ");
        }

        // Print asterisks for the left side of the diamond
        for (j = 1; j <= 2 * i - 1; ++j) {
            // Print '*' for the first and last columns,
            // otherwise print a space for hollow pattern
            if (j == 1 || j == 2 * i - 1) {
                printf("*");
            } else {
                printf(" ");
            }
        }

        // Move to the next line after printing each row
        printf("\n");
    }

    // Print the lower part of the diamond
    for (i = rows - 1; i >= 1; --i) {
        // Print spaces for indentation
        for (j = 1; j <= rows - i; ++j) {
            printf(" ");
        }

        // Print asterisks for the left side of the diamond
        for (j = 1; j <= 2 * i - 1; ++j) {
            // Print '*' for the first and last columns,
            // otherwise print a space for hollow pattern
            if (j == 1 || j == 2 * i - 1) {
                printf("*");
            } else {
                printf(" ");
            }
        }

        // Move to the next line after printing each row
        printf("\n");
    }

    return 0;
}

