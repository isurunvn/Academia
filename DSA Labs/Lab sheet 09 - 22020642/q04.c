#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int grade;
};

int gradeSearch(struct Student students[], int left, int right, const char *target_name) {
    if (left <= right) {
        int mid = left + (right - left) / 2;

        int cmp = strcmp(students[mid].name, target_name);

        if (cmp == 0)
            return students[mid].grade;
        
        else if (cmp > 0)
            return gradeSearch(students, left, mid - 1, target_name);
        
        else
            return gradeSearch(students, mid + 1, right, target_name);
    }

    return -1;
}

int main() {
    int size;
    
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    struct Student students[size];

    printf("Enter the student data (name grade):\n");
    for (int i = 0; i < size; ++i)
        scanf("%s %d", students[i].name, &students[i].grade);

    char target_name[50];

    printf("Enter the name of the student to search: ");
    scanf("%s", target_name);

    int grade = gradeSearch(students, 0, size - 1, target_name);

    if (grade != -1)
        printf("Student %s found with grade %d.\n", target_name, grade);
    else
        printf("Student %s not found.\n", target_name);

    return 0;
}
