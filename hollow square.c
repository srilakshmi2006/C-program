#include <stdio.h>

int main() {
    int rows, i, j;

    // Set the number of rows for the hollow square
    rows = 5;  // You can change this value as needed

    for (i = 1; i <= rows; ++i) {
        // Print asterisks for the first and last rows
        if (i == 1 || i == rows) {
            for (j = 1; j <= rows; ++j) {
                printf("* ");
            }
        } else {
            // Print asterisks for the hollow parts of the square
            printf("* ");
            for (j = 2; j < rows; ++j) {
                printf("  ");
            }
            printf("* ");
        }

        // Move to the next line after printing each row
        printf("\n");
    }

    return 0;
}

