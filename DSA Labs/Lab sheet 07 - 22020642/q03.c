#include <stdio.h>
#include <stdlib.h>

struct StackNode {
    int data;
    struct StackNode* next;
};

struct Stack {
    struct StackNode* top;
};

struct Stack* initializeStack() {
    struct Stack* stack = (struct Stack*)malloc(sizeof(struct Stack));
    if (stack == NULL) {
        printf("Memory allocation failed.\n");
        exit(EXIT_FAILURE);
    }
    stack->top = NULL;
    return stack;
}

void pushElement(struct Stack* stack, int data) {
    struct StackNode* newNode = (struct StackNode*)malloc(sizeof(struct StackNode));
    if (newNode == NULL) {
        printf("Memory allocation failed.\n");
        exit(EXIT_FAILURE);
    }
    newNode->data = data;
    newNode->next = stack->top;
    stack->top = newNode;
}

int popElement(struct Stack* stack) {
    if (stack->top == NULL) {
        printf("Stack is empty.\n");
        exit(EXIT_FAILURE);
    }
    int data = stack->top->data;
    struct StackNode* temp = stack->top;
    stack->top = stack->top->next;
    free(temp);
    return data;
}

void displayStack(struct Stack* stack) {
    struct StackNode* current = stack->top;
    if (current == NULL) {
        printf("Stack is empty.\n");
        return;
    }
    printf("Stack elements: ");
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

int main() {
    struct Stack* stack = initializeStack();

    pushElement(stack, 10);
    pushElement(stack, 20);
    pushElement(stack, 30);

    displayStack(stack);

    printf("Popped element: %d\n", popElement(stack));
    printf("Popped element: %d\n", popElement(stack));

    displayStack(stack);

    return 0;
}
