#include <stdio.h>

struct Product {
    int id;
    int sales;
};

void insertionSort(struct Product arr[], int n) {
    int i, j;
    struct Product key;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j].sales < key.sales) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main() {
    int n;

    printf("Enter the number of products: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer for the number of products.\n");
        return 1; 
    }

    struct Product products[n];

    printf("Enter the sales data for each product:\n");
    for (int i = 0; i < n; i++) {
        printf("Enter sales for product %d: ", i + 1);
        scanf("%d", &products[i].sales);
        products[i].id = i + 1; // Assuming product IDs start from 1 and increment by 1
    }

    insertionSort(products, n);

    printf("Top-selling products:\n");
    for (int i = 0; i < n; i++) {
        printf("Product ID: %d, Sales: %d\n", products[i].id, products[i].sales);
    }

    return 0;
}
