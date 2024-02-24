#include <stdio.h>

// Function to calculate factorial of a number
int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

// Function to calculate nCr (combination)
int nCr(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main() {
    int rows, i, j;

    // Set the number of rows for Pascal's Triangle
    rows = 5;  // You can change this value as needed

    for (i = 0; i < rows; ++i) {
        // Print spaces for indentation
        for (j = 0; j < rows - i - 1; ++j) {
            printf(" ");
        }

        // Print numbers using nCr formula
        for (j = 0; j <= i; ++j) {
            printf("%d ", nCr(i, j));
        }

        // Move to the next line after printing each row
        printf("\n");
    }

    return 0;
}

