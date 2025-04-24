//WAP to print the linklist elements.
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
int main()
{
    struct node *head,*temp,*ptr;
    head=(struct node*)malloc(sizeof(struct node));
    head->data=10;
    head->next=NULL;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=20;
    temp->next=NULL;
    head->next=temp;
    ptr=head;
    while(ptr!=NULL)
    {
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }
    return 0;
}