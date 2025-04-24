//WAP to delete the node from the linked list.
#include <stdio.h>
#include <stdlib.h>

// Define a structure for a node
struct node {
    int data;
    struct node *next;
};

struct node *head = NULL; // Initialize an empty linked list

// Function to insert a new node at the end
void insertAtEnd(int data) {
    struct node *newnode, *temp;
    
    // Allocate memory for new node
    newnode = (struct node *)malloc(sizeof(struct node));
    if (newnode == NULL) {
        printf("Memory allocation failed!\n");
        return;
    }

    newnode->data = data;
    newnode->next = NULL;

    // If the list is empty, new node becomes the head
    if (head == NULL) {
        head = newnode;
        return;
    }

    // Traverse to the last node
    temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }

    // Insert new node at the end
    temp->next = newnode;
}

// Function to delete a node at a given position
void deleteNode(int pos) {
    struct node *temp = head, *prev;


    if (head == NULL) {
        printf("List is empty. Nothing to delete.\n");
        return;
    }


    if (pos == 1) {
        head = head->next;
        free(temp);
        return;
    }

    
    for (int i = 1; temp != NULL && i < pos - 1; i++) {
        temp = temp->next;
    }


    if (temp == NULL || temp->next == NULL) {
        printf("Invalid position! Node not found.\n");
        return;
    }

   
    prev = temp->next;
    temp->next = prev->next;
    free(prev);
}


void display() {
    struct node *temp = head;
    if (temp == NULL) {
        printf("The list is empty.\n");
        return;
    }

    printf("Linked List: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// Main function
int main() {
    insertAtEnd(10);
    insertAtEnd(20);
    insertAtEnd(30);
    insertAtEnd(40);
    insertAtEnd(50);

    printf("Before deletion:\n");
    display();

    deleteNode(3); 
    printf("\nAfter deleting node at position 3:\n");
    display();

    deleteNode(1); 
    printf("\nAfter deleting node at position 1:\n");
    display();

    deleteNode(10); 
    return 0;
}
