#include <stdio.h>

int binarySearchRecursive(int arr[], int left, int right, int target) {
    if (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target)
            return mid;

        if (arr[mid] > target)
            return binarySearchRecursive(arr, left, mid - 1, target);

        return binarySearchRecursive(arr, mid + 1, right, target);
    }

    return -1;
}

int main() {
    int n, target;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d sorted integers:\n", n);
    for (int i = 0; i < n; ++i)
        scanf("%d", &arr[i]);

    printf("Enter the target value to search: ");
    scanf("%d", &target);

    int result = binarySearchRecursive(arr, 0, n - 1, target);

    if (result != -1)
        printf("Target %d is present at index %d.\n", target, result);
    else
        printf("Target %d is not present in the array.\n", target);

    return 0;
}
