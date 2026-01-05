/*
AIM:
To reverse a singly linked list.

CODE:
*/

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

int main() {
    struct node *head = NULL, *prev = NULL, *curr, *next;

    curr = head;
    while(curr) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    head = prev;
    printf("Linked list reversed\n");

    return 0;
}