/*
AIM:
To insert a node at the end of a singly linked list.

CODE:
*/

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

int main() {
    struct node *head = NULL, *temp, *newnode;

    newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter data: ");
    scanf("%d", &newnode->data);
    newnode->next = NULL;

    if(head == NULL)
        head = newnode;
    else {
        temp = head;
        while(temp->next)
            temp = temp->next;
        temp->next = newnode;
    }

    printf("Inserted at end.\n");
    return 0;
}