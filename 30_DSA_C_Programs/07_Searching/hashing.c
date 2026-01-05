/*
AIM:
To implement simple hashing.

CODE:
*/

#include <stdio.h>
#define SIZE 10

int hashTable[SIZE];

void insert(int key) {
    int index = key % SIZE;
    hashTable[index] = key;
}

void display() {
    for(int i = 0; i < SIZE; i++)
        printf("%d ", hashTable[i]);
    printf("\n");
}

int main() {
    insert(15);
    insert(25);
    insert(35);
    display();
    return 0;
}