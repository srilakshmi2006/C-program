#include <stdio.h>

int main() {
    int rows, i, j;

    // Set the number of rows for the inverted left half pyramid
    rows = 5;  // You can change this value as needed

    for (i = 1; i <= rows; ++i) {
        // Print asterisks for the inverted left half pyramid
        for (j = rows; j >= i; --j) {
            printf("* ");
        }

        // Move to the next line after printing each row
        printf("\n");
    }

    return 0;
}

