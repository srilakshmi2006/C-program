#include <stdio.h>

int main() {
    int rows, i, j, space;

    // Set the number of rows for the pyramid
    rows = 5;  // You can change this value as needed

    for (i = 1; i <= rows; ++i) {
        // Print spaces for indentation
        for (space = 1; space <= rows - i; ++space) {
            printf("  ");
        }

        // Print asterisks for the left side of the pyramid
        for (j = 1; j <= i; ++j) {
            printf("* ");
        }

        // Print asterisks for the right side of the pyramid
        for (j = i - 1; j >= 1; --j) {
            printf("* ");
        }

        // Move to the next line after printing each row
        printf("\n");
    }

    return 0;
}

