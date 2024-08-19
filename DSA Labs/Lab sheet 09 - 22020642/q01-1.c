#include <stdio.h>

int binarySearch(int arr[], int n, int target) {
    int left = 0;
    int right = n - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target)
            return mid;

        if (arr[mid] < target)
            left = mid + 1;

        else
            right = mid - 1;
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

    int result = binarySearch(arr, n, target);

    if (result != -1)
        printf("Target %d is present at index %d.\n", target, result);
    else
        printf("Target %d is not present in the array.\n", target);

    return 0;
}
