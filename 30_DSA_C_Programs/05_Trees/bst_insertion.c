/*
AIM:
To insert a node in Binary Search Tree.

CODE:
*/

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *left, *right;
};

struct node* insert(struct node* root, int val) {
    if(root == NULL) {
        root = (struct node*)malloc(sizeof(struct node));
        root->data = val;
        root->left = root->right = NULL;
    }
    else if(val < root->data)
        root->left = insert(root->left, val);
    else
        root->right = insert(root->right, val);

    return root;
}

void inorder(struct node* root) {
    if(root) {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

int main() {
    struct node* root = NULL;
    root = insert(root, 10);
    insert(root, 5);
    insert(root, 20);

    inorder(root);
    return 0;
}