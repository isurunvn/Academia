#include <stdio.h>

int temperatureSearch(int temperatures[], int size, int target) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (temperatures[mid] == target)
            return mid;
        
        else if (temperatures[mid] > target)
            right = mid - 1;
        
        else
            left = mid + 1;
    }

    return -1;
}

int main() {
    int size, target;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int temperatures[size];

    printf("Enter the sorted temperature values:\n");
    for (int i = 0; i < size; ++i)
        scanf("%d", &temperatures[i]);

    printf("Enter the target temperature to search: ");
    scanf("%d", &target);

    int index = temperatureSearch(temperatures, size, target);

    if (index != -1)
        printf("Temperature %d found at index %d.\n", target, index);
    else
        printf("Temperature %d not found.\n", target);

    return 0;
}
