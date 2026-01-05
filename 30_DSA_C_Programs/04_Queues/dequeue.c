/*
AIM:
To perform dequeue operation.

CODE:
*/

#include <stdio.h>
#define MAX 5

int queue[MAX], front = 0, rear = 2;

int dequeue() {
    if(front > rear) {
        printf("Queue Underflow\n");
        return -1;
    }
    return queue[front++];
}

int main() {
    queue[0] = 10;
    queue[1] = 20;
    queue[2] = 30;
    printf("Deleted: %d\n", dequeue());
    return 0;
}