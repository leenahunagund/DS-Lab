#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

struct Queue {
    int front, rear, size;
    int* array;
    int capacity;
};

struct Queue* createQueue(int capacity) {
    struct Queue* queue = (struct Queue*) malloc(sizeof(struct Queue));
    queue->front = 0;
    queue->rear = capacity - 1;
    queue->size = 0;
    queue->capacity = capacity;
    queue->array = (int*) malloc(capacity * sizeof(int));
    return queue;
}

int isFull(struct Queue* queue) {
    return queue->size == queue->capacity;
}

int isEmpty(struct Queue* queue) {
    return queue->size == 0;
}

void enqueue(struct Queue* queue, int item) {
    if (isFull(queue)) {
        printf("Queue overflow\n");
        return;
    }
    queue->rear = (queue->rear + 1) % queue->capacity;
    queue->array[queue->rear] = item;
    queue->size++;
}

int dequeue(struct Queue* queue) {
    if (isEmpty(queue)) {
        printf("Queue underflow\n");
        return -1;
    }
    int item = queue->array[queue->front];
    queue->front = (queue->front + 1) % queue->capacity;
    queue->size--;
    return item;
}

int main() {
    struct Queue* queue = createQueue(MAX_SIZE);
    enqueue(queue, 1);
    enqueue(queue, 2);
    enqueue(queue, 3);
    printf("%d dequeued from queue\n", dequeue(queue));
    printf("%d dequeued from queue\n", dequeue(queue));
    printf("%d dequeued from queue\n", dequeue(queue));
    printf("%d dequeued from queue\n", dequeue(queue));
    return 0;
}
