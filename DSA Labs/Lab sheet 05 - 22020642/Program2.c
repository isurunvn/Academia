#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX_SIZE 100

char stack[MAX_SIZE];
int top = -1;

bool isEmpty() {
    return top == -1;
}

bool isFull() {
    return top == MAX_SIZE - 1;
}

void push(char item) {
    if (isFull()) {
        printf("Stack Overflow\n");
        exit(1);
    }
    stack[++top] = item;
}

char pop() {
    if (isEmpty()) {
        printf("Stack Underflow\n");
        exit(1);
    }
    return stack[top--];
}

bool isMatchingPair(char opening, char closing) {
    return (opening == '(' && closing == ')') ||
           (opening == '{' && closing == '}') ||
           (opening == '[' && closing == ']');
}

bool isBalanced(char *expr) {
    for (int i = 0; expr[i] != '\0'; i++) {
        if (expr[i] == '(' || expr[i] == '{' || expr[i] == '[') {
            push(expr[i]);
        } else if (expr[i] == ')' || expr[i] == '}' || expr[i] == ']') {
            if (isEmpty() || !isMatchingPair(pop(), expr[i])) {
                return false;
            }
        }
    }
    return isEmpty(); 
}

int main() {
    char expr[MAX_SIZE];

    printf("Enter a string of brackets:: ");
    fgets(expr, MAX_SIZE, stdin);

    if (isBalanced(expr)) {
        printf("Valid\n");
    } else {
        printf("Not Valid\n");
    }

    return 0;
}
