/*
AIM:
To find height of a binary tree.

CODE:
*/

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *left, *right;
};

int height(struct node* root) {
    if(root == NULL)
        return 0;
    int lh = height(root->left);
    int rh = height(root->right);
    return (lh > rh ? lh : rh) + 1;
}

int main() {
    struct node* root = (struct node*)malloc(sizeof(struct node));
    root->left = root->right = NULL;
    printf("Height = %d\n", height(root));
    return 0;
}