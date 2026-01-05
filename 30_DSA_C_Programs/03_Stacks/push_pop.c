/*
AIM:
To perform push and pop operations on stack.

CODE:
*/

#include <stdio.h>
#define MAX 5

int stack[MAX], top = -1;

void push(int x) {
    if(top == MAX - 1)
        printf("Overflow\n");
    else
        stack[++top] = x;
}

int pop() {
    if(top == -1) {
        printf("Underflow\n");
        return -1;
    }
    return stack[top--];
}

int main() {
    push(5);
    push(15);
    printf("Popped: %d\n", pop());
    return 0;
}

/*
RESULT:
Push and pop operations executed.
*/