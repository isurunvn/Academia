#include <stdio.h>
#include <string.h>

struct Contact {
    char name[50];
    char phone_number[15];
};

int phoneBookSearch(struct Contact contacts[], int n, const char *target_name) {
    int left = 0;
    int right = n - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        int cmp = strcmp(contacts[mid].name, target_name);

        if (cmp == 0)
            return mid;
        
        else if (cmp > 0)
            right = mid - 1;
        
        else
            left = mid + 1;
    }

    return -1;
}

int main() {
    struct Contact phone_book[] = {
        {"Alice", "1234567890"},
        {"Bob", "2345678901"},
        {"Charlie", "3456789012"},
        {"David", "4567890123"},
        {"Eve", "5678901234"}
    };

    int num_contacts = sizeof(phone_book) / sizeof(phone_book[0]);

    char target_name[50];

    printf("Enter the name to search for: ");
    scanf("%s", target_name);

    int result_index = phoneBookSearch(phone_book, num_contacts, target_name);

    if (result_index != -1)
        printf("%s's phone number is %s.\n", target_name, phone_book[result_index].phone_number);
    else
        printf("Name not found in the phone book.\n");

    return 0;
}
