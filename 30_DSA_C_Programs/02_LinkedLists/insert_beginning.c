/*
AIM:
To insert a node at the beginning of a singly linked list.

CODE:
*/

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

int main() {
    struct node *head = NULL, *newnode;

    newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter data: ");
    scanf("%d", &newnode->data);

    newnode->next = head;
    head = newnode;

    printf("Inserted at beginning.\n");
    printf("List: %d\n", head->data);

    return 0;
}