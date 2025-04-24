//WAP to insert the elemnts in the Binary Seaarch Tree and before inserting ask the user where to insert the element left or right of the parent node. and at the end display the tree data.
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
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}


void insert(struct Node* root, int value) {
    struct Node* current = root;

    while (1) {
        char direction;

        printf("Current node value: %d\n", current->data);
        printf("Where do you want to insert %d? (l = left, r = right): ", value);
        scanf(" %c", &direction);

        if (direction == 'l') {
        
            if (current->left == NULL) {
                current->left = createNode(value);
                break;
            } else {
            
                current = current->left;
            }
        } else if (direction == 'r') {
            
            if (current->right == NULL) {
                current->right = createNode(value);
                break;
            } else {
            
                current = current->right;
            }
        } else {
            printf("Invalid input. Please type 'l' or 'r'.\n");
        }
    }
}


void inorder(struct Node* root) {
    if (root != NULL) {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

int main() {
    int totalNodes, value;
    struct Node* root = NULL;

    printf("How many nodes do you want in the tree? ");
    scanf("%d", &totalNodes);

    if (totalNodes > 0) {
        
        printf("Enter the value for the root node: ");
        scanf("%d", &value);
        root = createNode(value);

    
        for (int i = 1; i < totalNodes; i++) {
            printf("Enter value for node %d: ", i + 1);
            scanf("%d", &value);
            insert(root, value);
        }

        
        printf("\nInorder traversal of the tree:\n");
        inorder(root);
        printf("\n");
    } else {
        printf("You must enter at least one node.\n");
    }

    return 0;
}

