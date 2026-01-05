/*
AIM:
To implement circular queue.

CODE:
*/

#include <stdio.h>
#define MAX 5

int cq[MAX], front = -1, rear = -1;

void insert(int x) {
    if((rear + 1) % MAX == front)
        printf("Queue Full\n");
    else {
        if(front == -1) front = 0;
        rear = (rear + 1) % MAX;
        cq[rear] = x;
    }
}

void display() {
    int i = front;
    while(i != rear) {
        printf("%d ", cq[i]);
        i = (i + 1) % MAX;
    }
    printf("%d\n", cq[rear]);
}

int main() {
    insert(5);
    insert(10);
    insert(15);
    display();
    return 0;
}