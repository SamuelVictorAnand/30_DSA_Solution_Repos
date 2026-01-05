/*
AIM:
To create and display a singly linked list.

ALGORITHM:
1. Create nodes using dynamic memory allocation.
2. Link nodes.
3. Display the list.

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
    int choice;

    do {
        newnode = (struct node*)malloc(sizeof(struct node));
        printf("Enter data: ");
        scanf("%d", &newnode->data);
        newnode->next = NULL;

        if(head == NULL)
            head = temp = newnode;
        else {
            temp->next = newnode;
            temp = newnode;
        }

        printf("Add another node? (1/0): ");
        scanf("%d", &choice);
    } while(choice);

    temp = head;
    printf("Linked List: ");
    while(temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    return 0;
}

/*
RESULT:
The singly linked list is created and displayed.
*/