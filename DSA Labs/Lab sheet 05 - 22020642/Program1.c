#include <stdio.h>

int main() {
    FILE *file;

    file = fopen("Names.txt", "r");

    if (file == NULL) {
        printf("Error opening the file.\n");
        return 1; 
    }

    char line[100]; 
    while (fgets(line, sizeof(line), file) != NULL) {
        printf("%s", line);
    }
    fclose(file);

    return 0;
}
