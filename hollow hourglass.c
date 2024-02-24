#include <stdio.h>

int main() {
    int rows, i, j, space;

    // Set the number of rows for the hourglass pattern
    rows = 5;  // You can change this value as needed

    // Print the top part of the hourglass
    for (i = 1; i <= rows; ++i) {
        for (j = 1; j <= i; ++j) {
            if (j == 1 || j == i)
                printf("* ");
            else
                printf("  ");
        }

        // Move to the next line after printing each row
        printf("\n");
    }

    // Print the bottom part of the hourglass
    for (i = rows - 1; i >= 1; --i) {
        for (j = 1; j <= i; ++j) {
            if (j == 1 || j == i)
                printf("* ");
            else
                printf("  ");
        }

        // Move to the next line after printing each row
        printf("\n");
    }

    return 0;
}

