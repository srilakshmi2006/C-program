#include <stdio.h>

int main() {
    int rows, i, j, space;

    // Set the number of rows for the hollow full pyramid
    rows = 5;  // You can change this value as needed

    for (i = 1; i <= rows; ++i) {
        // Print spaces for indentation
        for (space = 1; space <= rows - i; ++space) {
            printf("  ");
        }

        // Print the left side of the pyramid
        for (j = 1; j <= 2 * i - 1; ++j) {
            if (j == 1 || j == 2 * i - 1 || i == rows) {
                // Print asterisks for the first, last columns, and the last row
                printf("* ");
            } else {
                // Print spaces for the hollow part
                printf("  ");
            }
        }

        // Move to the next line after printing each row
        printf("\n");
    }

    return 0;
}

