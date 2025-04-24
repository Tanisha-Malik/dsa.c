//WAP to check (Strict Binary Tree).
#include <stdio.h>
#include <stdlib.h>


struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};


struct Node* createNode(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->left = newNode->right = NULL;
    return newNode;
}


int isStrictBinaryTree(struct Node* root) {
    if (root == NULL)
        return 1; 

    
    if (root->left == NULL && root->right == NULL)
        return 1;

    
    if (root->left != NULL && root->right != NULL)
        return isStrictBinaryTree(root->left) && isStrictBinaryTree(root->right);

    
    return 0;
}

int main() {
  
    struct Node* root = createNode(10);
    root->left = createNode(5);
    root->right = createNode(15);
    root->left->left = createNode(3);
    root->left->right = createNode(7);
    root->right->left = createNode(12);
    root->right->right = createNode(18);

    if (isStrictBinaryTree(root))
        printf("The tree is a strict binary tree.\n");
    else
        printf("The tree is NOT a strict binary tree.\n");

    return 0;
}
