/*
AIM:
To check for balanced parentheses.

CODE:
*/

#include <stdio.h>

char stack[50];
int top = -1;

void push(char x) { stack[++top] = x; }
char pop() { return stack[top--]; }

int main() {
    char exp[50];
    int i;

    printf("Enter expression: ");
    scanf("%s", exp);

    for(i = 0; exp[i]; i++) {
        if(exp[i] == '(')
            push(exp[i]);
        else if(exp[i] == ')') {
            if(top == -1) {
                printf("Unbalanced\n");
                return 0;
            }
            pop();
        }
    }

    if(top == -1)
        printf("Balanced\n");
    else
        printf("Unbalanced\n");

    return 0;
}