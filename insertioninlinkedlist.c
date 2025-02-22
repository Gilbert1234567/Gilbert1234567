#include<stdio.h>
#include<stdlib.h>

struct Node 
{
    int data;
    struct Node* next;
};

// Function to create a new node
struct Node* createNode(int data)
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to insert a node at the end of the list
void insertAtEnd(struct Node** head, int data)
{
    struct Node* newNode = createNode(data);
    if (*head == NULL) {
        *head = newNode;  // If the list is empty, the new node is the head
        return;
    }
    
    struct Node* temp = *head;
    while (temp->next != NULL) {
        temp = temp->next;  // Traverse to the last node
    }
    temp->next = newNode;  // Insert the new node at the end
}

int main()
{
    struct Node* head = createNode(10);  // Create the first node
    struct Node* second = createNode(20);  // Create the second node
    struct Node* third = createNode(30);  // Create the third node

    // Linking the nodes
    head->next = second;
    second->next = third;

    // Insert a new node with value 40 at the end
    insertAtEnd(&head, 40);

    return 0;
}