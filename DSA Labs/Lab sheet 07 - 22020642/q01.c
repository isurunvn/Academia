#include <stdio.h>
#include <stdlib.h>

struct QueueNode {
    int data;
    struct QueueNode *next;
};

struct Queue {
    struct QueueNode *front, *rear;
};

struct Queue* initializeQueue() {
    struct Queue* queue = (struct Queue*)malloc(sizeof(struct Queue));
    if (queue == NULL) {
        printf("Memory allocation failed.\n");
        exit(EXIT_FAILURE);
    }
    queue->front = queue->rear = NULL;
    return queue;
}

void enqueueElement(struct Queue* queue, int data) {
    struct QueueNode* newNode = (struct QueueNode*)malloc(sizeof(struct QueueNode));
    if (newNode == NULL) {
        printf("Memory allocation failed.\n");
        exit(EXIT_FAILURE);
    }
    newNode->data = data;
    newNode->next = NULL;
    if (queue->rear == NULL) {
        queue->front = queue->rear = newNode;
    } else {
        queue->rear->next = newNode;
        queue->rear = newNode;
    }
}

int dequeueElement(struct Queue* queue) {
    if (queue->front == NULL) {
        printf("Queue is empty.\n");
        exit(EXIT_FAILURE);
    }
    int data = queue->front->data;
    struct QueueNode* temp = queue->front;
    queue->front = queue->front->next;
    free(temp);
    if (queue->front == NULL) {
        queue->rear = NULL;
    }
    return data;
}

void displayQueue(struct Queue* queue) {
    struct QueueNode* current = queue->front;
    if (current == NULL) {
        printf("Queue is empty.\n");
        return;
    }
    printf("Queue elements: ");
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

int main() {
    struct Queue* queue = initializeQueue();
    
    enqueueElement(queue, 10);
    enqueueElement(queue, 20);
    enqueueElement(queue, 30);
    
    displayQueue(queue);
    
    printf("Dequeued element: %d\n", dequeueElement(queue));
    printf("Dequeued element: %d\n", dequeueElement(queue));
    
    displayQueue(queue);
    
    return 0;
}
