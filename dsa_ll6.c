//WAP to insert the element at the beginning of the circular lin list.
#include <stdio.h>
#include <stdlib.h>


struct Node {
    int data;
    struct Node* next;
};


void insertAtBeginning(struct Node** head, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    struct Node* temp = *head;

    newNode->data = data;
    newNode->next = newNode;  

    if (*head == NULL) {
        *head = newNode;
    } else {
        
        while (temp->next != *head)
            temp = temp->next;

        newNode->next = *head;
        temp->next = newNode;  
        *head = newNode;  
    }
}


void printList(struct Node* head) {
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }

    struct Node* temp = head;
    do {
        printf("%d -> ", temp->data);
        temp = temp->next;
    } while (temp !=head)
    printf("NULL\n");

    
    insertAtBeginning(&head, 10);
    insertAtBeginning(&head, 20);
    insertAtBeginning(&head, 30);
    insertAtBeginning(&head, 40);

    printf("Circular Linked List after insertions:\n");
    printList(head);

    return 0;
}
