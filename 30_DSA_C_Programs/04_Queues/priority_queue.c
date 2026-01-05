/*
AIM:
To implement priority queue.

CODE:
*/

#include <stdio.h>
#define MAX 5

int pq[MAX], size = 0;

void insert(int x) {
    int i;
    for(i = size - 1; i >= 0 && pq[i] > x; i--)
        pq[i + 1] = pq[i];
    pq[i + 1] = x;
    size++;
}

void display() {
    for(int i = 0; i < size; i++)
        printf("%d ", pq[i]);
    printf("\n");
}

int main() {
    insert(30);
    insert(10);
    insert(20);
    display();
    return 0;
}