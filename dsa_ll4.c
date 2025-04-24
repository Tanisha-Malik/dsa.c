//WAP To insert the element at the end of the linked list.
#include <stdio.h>
#include <stdlib.h>


struct node {
    int data;
    struct node *next;
};

struct node *head = NULL; 


void insertAtEnd(int data) {
    struct node *newnode, *temp;
    

    newnode = (struct node *)malloc(sizeof(struct node));
    if (newnode == NULL) {
        printf("Memory allocation failed!\n");
        return;
    }

    newnode->data = data;
    newnode->next = NULL;

    
    if (head == NULL) {
        head = newnode;
        return;
    }


    temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }

    
    temp->next = newnode;
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
    display(); 
    return 0;
}
