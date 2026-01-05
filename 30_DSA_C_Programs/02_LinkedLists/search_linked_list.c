/*
AIM:
To search an element in a singly linked list.

CODE:
*/

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

int main() {
    struct node *head = NULL, *temp;
    int key, pos = 1;

    printf("Enter element to search: ");
    scanf("%d", &key);

    temp = head;
    while(temp) {
        if(temp->data == key) {
            printf("Found at position %d\n", pos);
            return 0;
        }
        pos++;
        temp = temp->next;
    }

    printf("Not found\n");
    return 0;
}