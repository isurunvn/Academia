#include <stdio.h>

int totalWays(int n) {
    if (n == 0 || n == 1)
        return 1;
    else if (n == 2)
        return 2;
    else
        return totalWays(n - 1) + totalWays(n - 2) + totalWays(n - 3);
}

int main() {
    int steps;

    printf("Enter the number of steps in the staircase: ");
    scanf("%d", &steps);

    if (steps < 0) {
        printf("Please enter a non-negative integer.\n");
        return 1; // Exit the program with an error code
    }

    int ways = totalWays(steps);

    printf("Total number of ways to climb the staircase: %d\n", ways);

    return 0;
}
