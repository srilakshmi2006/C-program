#include <stdio.h>

int main() {
    int rows, i, j;

    // Set the number of rows for the inverted right half pyramid
    rows = 5;  // You can change this value as needed

    for (i = rows; i >= 1; --i) {
        // Print asterisks for the inverted right half pyramid
        for (j = 1; j <= i; ++j) {
            printf("* ");
        }

        // Move to the next line after printing each row
        printf("\n");
    }

    return 0;
}

