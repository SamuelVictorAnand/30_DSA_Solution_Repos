/*
AIM:
To implement queue using array.

CODE:
*/

#include <stdio.h>
#define MAX 5

int queue[MAX], front = -1, rear = -1;

void enqueue(int x) {
    if(rear == MAX - 1)
        printf("Queue Overflow\n");
    else {
        if(front == -1) front = 0;
        queue[++rear] = x;
    }
}

void display() {
    for(int i = front; i <= rear; i++)
        printf("%d ", queue[i]);
    printf("\n");
}

int main() {
    enqueue(10);
    enqueue(20);
    display();
    return 0;
}