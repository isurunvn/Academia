#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

void displayFibonacciSequence(int n) {
    printf("Fibonacci Sequence for first %d terms: ", n);
    for (int i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");
}

int main() {
    int terms;

    printf("Enter the number of terms for the Fibonacci sequence: ");
    scanf("%d", &terms);

    if (terms < 0) {
        printf("Please enter a non-negative integer.\n");
    } else {
        displayFibonacciSequence(terms);
    }

    return 0;
}
