#include <stdio.h>

int calculateWays(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else if (n == 2) {
        return 2;
    } else {
        return calculateWays(n - 1) + calculateWays(n - 2) + calculateWays(n - 3);
    }
}

int main() {
    int numberOfSteps;

    printf("Enter the number of steps in the staircase: ");
    scanf("%d", &numberOfSteps);

    if (numberOfSteps < 0) {
        printf("Please enter a non-negative integer.\n");
    } else {
        int totalWays = calculateWays(numberOfSteps);
        printf("Total number of ways to climb the staircase with %d steps: %d\n", numberOfSteps, totalWays);
    }

    return 0;
}
