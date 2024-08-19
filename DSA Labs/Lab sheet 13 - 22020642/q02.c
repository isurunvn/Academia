#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Book {
    char *title;
    int pages;
};

int main() {
    int numBooks;
    
    printf("Enter the number of books: ");
    scanf("%d", &numBooks);

    struct Book *books = (struct Book *)calloc(numBooks, sizeof(struct Book));

    for (int i = 0; i < numBooks; i++) {
        printf("Enter details for Book %d:\n", i + 1);
        
        books[i].title = (char *)malloc(100 * sizeof(char)); // Assuming maximum title length is 100 characters
        
        printf("Enter title: ");
        scanf(" %[^\n]s", books[i].title);
        
        printf("Enter pages: ");
        scanf("%d", &books[i].pages);
    }

    printf("Entered details for %d books:\n", numBooks);
    for (int i = 0; i < numBooks; i++) {
        printf("Book %d - Title: %s, Pages: %d\n", i + 1, books[i].title, books[i].pages);
        
        free(books[i].title);
    }

    free(books);

    return 0;
}
