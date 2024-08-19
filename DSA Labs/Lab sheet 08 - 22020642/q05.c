#include <stdio.h>

float calculateTotalWeight(int n) {
    if (n == 0) {
        return 0;
    } else {
        char componentName[100];
        float componentWeight;

        printf("Enter the name of component %d: ", n);
        scanf("%s", componentName);

        printf("Enter the weight of component %d: ", n);
        scanf("%f", &componentWeight);

        return componentWeight + calculateTotalWeight(n - 1);
    }
}

int main() {
    int numberOfComponents;

    printf("Enter the number of components: ");
    scanf("%d", &numberOfComponents);

    if (numberOfComponents <= 0) {
        printf("Please enter a valid number of components.\n");
    } else {
        float totalWeight = calculateTotalWeight(numberOfComponents);
        printf("Total weight of the final product: %.2f\n", totalWeight);
    }

    return 0;
}
