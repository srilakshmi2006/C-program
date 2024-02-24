#include <stdio.h>

int main() {
    int rows, i, j, space;

    // Set the number of rows for the inverted hollow full pyramid
    rows = 5;  // You can change this value as needed

    for (i = rows; i >= 1; --i) {
        // Print spaces for indentation
        for (space = 0; space < rows - i; ++space) {
            printf("  ");
        }

        // Print asterisks for the left side of the inverted pyramid
        for (j = 1; j <= 2 * i - 1; ++j) {
            // Print '*' for the first and last column
            if (j == 1 || j == 2 * i - 1) {
                printf("* ");
            } else {
                printf("  "); // Print spaces for the hollow part
            }
        }

        // Move to the next line after printing each row
        printf("\n");
    }

    return 0;
}

