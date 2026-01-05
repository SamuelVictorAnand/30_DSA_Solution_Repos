/*
AIM:
To implement stack using array.

CODE:
*/

#include <stdio.h>
#define MAX 5

int stack[MAX], top = -1;

void push(int val) {
    if(top == MAX - 1)
        printf("Stack Overflow\n");
    else
        stack[++top] = val;
}

void display() {
    for(int i = top; i >= 0; i--)
        printf("%d ", stack[i]);
    printf("\n");
}

int main() {
    push(10);
    push(20);
    display();
    return 0;
}

/*
RESULT:
Stack is displayed.
*/