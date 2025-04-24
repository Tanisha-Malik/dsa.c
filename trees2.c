//WAP to find the sum of all the nodes in a binary tree.

#include <stdio.h>
#include <stdlib.h>


struct node {
    int data;
    struct node *left;
    struct node *right;
};


struct node *createNode(int data) {
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}


int sumOfNodes(struct node *root) {
    if (root == NULL) {
        return 0;
    } else {
        return root->data + sumOfNodes(root->left) + sumOfNodes(root->right);
    }
}


int main() {
    struct node *root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);
    root->right->left = createNode(7);

    int sum = sumOfNodes(root);
    printf("Sum of all nodes: %d\n", sum);

    return 0;
}
