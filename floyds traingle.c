#include <stdio.h>

int main() {
    int rows, i, j, num = 1;

    // Set the number of rows for Floyd's Triangle
    rows = 4;  // You can change this value as needed

    for (i = 1; i <= rows; ++i) {
        for (j = 1; j <= i; ++j) {
            printf("%d ", num);
            ++num;
        }

        // Move to the next line after printing each row
        printf("\n");
    }

    return 0;
}

