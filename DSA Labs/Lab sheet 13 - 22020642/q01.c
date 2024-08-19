#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* newNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void insertNode(struct Node** head, int data) {
    struct Node* newNode = newNode(data);
    if (*head == NULL || (*head)->data >= data) {
        newNode->next = *head;
        *head = newNode;
    } else {
        struct Node* current = *head;
        while (current->next != NULL && current->next->data < data) {
            current = current->next;
        }
        newNode->next = current->next;
        current->next = newNode;
    }
}

struct Node* mergeLists(struct Node* first, struct Node* second) {
    struct Node* mergedList = NULL;

    if (first == NULL)
        return second;
    else if (second == NULL)
        return first;

    if (first->data <= second->data) {
        mergedList = first;
        mergedList->next = mergeLists(first->next, second);
    } else {
        mergedList = second;
        mergedList->next = mergeLists(first, second->next);
    }

    return mergedList;
}

void displayList(struct Node* head) {
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node* firstList = NULL;
    insertNode(&firstList, 1);
    insertNode(&firstList, 2);
    insertNode(&firstList, 3);
    insertNode(&firstList, 4);

    struct Node* secondList = NULL;
    insertNode(&secondList, 7);
    insertNode(&secondList, 8);
    insertNode(&secondList, 9);

    struct Node* mergedList = mergeLists(firstList, secondList);

    printf("First LinkedList: ");
    displayList(firstList);
    printf("Second LinkedList: ");
    displayList(secondList);
    printf("Merged LinkedList: ");
    displayList(mergedList);

    return 0;
}
