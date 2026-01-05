/*
AIM:
To delete a node from Binary Search Tree.

CODE:
*/

#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *left, *right;
};

struct node* findMin(struct node* root) {
    while(root->left)
        root = root->left;
    return root;
}

struct node* deleteNode(struct node* root, int val) {
    if(root == NULL) return root;

    if(val < root->data)
        root->left = deleteNode(root->left, val);
    else if(val > root->data)
        root->right = deleteNode(root->right, val);
    else {
        if(root->left == NULL) {
            struct node* temp = root->right;
            free(root);
            return temp;
        }
        else if(root->right == NULL) {
            struct node* temp = root->left;
            free(root);
            return temp;
        }
        struct node* temp = findMin(root->right);
        root->data = temp->data;
        root->right = deleteNode(root->right, temp->data);
    }
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
    root = deleteNode(root, 10);
    inorder(root);
    return 0;
}