#include<stdio.h>
#include<stdlib.h>

//inserting at the begining of the list of a node
struct Node
{
    int data;
    struct Node* next;
};

void addFirst(struct Node** head, int val)
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = val;
    newNode->next = *head;
    *head = newNode;
}

void printList(struct Node* head)
{
    struct Node* temp = head;
    while(temp != NULL)
    {
        printf("%d->", temp->data); // Corrected to print the data of the current node
        temp = temp->next;
    }
    printf("NULL.\n");
}

int main()
{
    struct Node* head = NULL;
    addFirst(&head, 10);
    addFirst(&head, 20);
    addFirst(&head, 30);
    
    printList(head);
    
    return 0;
}