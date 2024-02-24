#include <stdio.h>

int main() {
    int rows, i, j, space;

    // Set the number of rows for the hourglass pattern
    rows = 5;  // You can change this value as needed

    // Upper half of the hourglass
    for (i = 1; i <= rows; ++i) {
        // Print spaces for indentation
        for (space = 0; space < i - 1; ++space) {
            printf("  ");
        }

        // Print asterisks for the left side of the hourglass
        for (j = 1; j <= 2 * (rows - i) + 1; ++j) {
            printf("* ");
        }

        // Move to the next line after printing each row
        printf("\n");
    }

    // Lower half of the hourglass
    for (i = rows - 1; i >= 1; --i) {
        // Print spaces for indentation
        for (space = 0; space < i - 1; ++space) {
            printf("  ");
        }

        // Print asterisks for the left side of the hourglass
        for (j = 1; j <= 2 * (rows - i) + 1; ++j) {
            printf("* ");
        }

        // Move to the next line after printing each row
        printf("\n");
    }

    return 0;
}

