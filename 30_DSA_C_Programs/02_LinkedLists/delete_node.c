/*
AIM:
To delete a node from a singly linked list.

CODE:
*/

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

int main() {
    struct node *head = NULL, *temp, *prev;
    int key;

    printf("Enter value to delete: ");
    scanf("%d", &key);

    temp = head;
    while(temp && temp->data != key) {
        prev = temp;
        temp = temp->next;
    }

    if(temp) {
        prev->next = temp->next;
        free(temp);
        printf("Node deleted\n");
    }

    return 0;
}