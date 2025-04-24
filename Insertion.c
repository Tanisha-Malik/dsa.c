//WAP to insert the element in the stack using array.
#include <stdio.h>
#include <stdlib.h>

#define MAX 5
int stack[MAX], top = -1;

void push(int);
void pop();
void display();

int main()
{
    int ch, ele;
    
    while (1)
    {
        printf("1. Push\n2. Pop\n3. Display\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);
        
        if (ch == 1)
        {
            printf("Enter the element to be pushed: ");
            scanf("%d", &ele);
            push(ele);
        }
        else if (ch == 2)
        {
            pop();
        }
        else if (ch == 3)
        {
            display();
        }
        else if (ch == 4)
        {
            exit(0);
        }
        else
        {
            printf("Invalid choice! Please try again.\n");
        }
    }  
    return 0;
}

void push(int ele)
{
    if (top == MAX - 1)
    {
        printf("Stack Overflow! Cannot insert %d\n", ele);
        return;
    }
    top++;
    stack[top] = ele;
    printf("%d pushed into the stack.\n", ele);
}

void pop()
{
    if (top == -1)
    {
        printf("Stack Underflow! Cannot pop from an empty stack.\n");
        return;
    }
    printf("%d popped from the stack.\n", stack[top]);
    top--;
}

void display()
{
    if (top == -1)
    {
        printf("Stack is empty.\n");
        return;
    }
    printf("Stack elements: ");
    for (int i = 0; i <= top; i++)
    {
        printf("%d ", stack[i]);
    }
    printf("\n");
}
