#include <stdio.h>

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return gcd(b, a % b);
    }
}

int main() {
    int num1, num2;

    printf("Enter the first positive integer: ");
    scanf("%d", &num1);
    printf("Enter the second positive integer: ");
    scanf("%d", &num2);

    if (num1 <= 0 || num2 <= 0) {
        printf("Please enter positive integers.\n");
    } else {
        printf("GCD of %d and %d = %d\n", num1, num2, gcd(num1, num2));
    }

    return 0;
}
