#include<stdio.h>
#include<stdlib.h>

struct Node 
{
    int data;
    struct Node* next;
};

struct Node* createNode(int data)
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

struct Node* deleteNode(struct Node* head, int key)
{
    // If the list is empty
    if (head == NULL) {
        printf("The list is empty.\n");
        return head;
    }

    // If the node to be deleted is the head node
    if (head->data == key) {
        struct Node* temp = head;
        head = head->next;  // Move the head to the next node
        free(temp);  // Free memory of the deleted node
        return head;
    }

    // Search for the node to be deleted
    struct Node* temp = head;
    while (temp->next != NULL && temp->next->data != key) {
        temp = temp->next;
    }

    // If the node wasn't found
    if (temp->next == NULL) {
        printf("Node with data %d not found.\n", key);
        return head;
    }

    // Node is found, remove it from the list
    struct Node* nodeToDelete = temp->next;
    temp->next = temp->next->next;
    free(nodeToDelete);  // Free memory of the deleted node

    return head;
}

int main()
{
    struct Node* head = createNode(10);
    struct Node* second = createNode(20);
    struct Node* third = createNode(30);

    // Linking the nodes
    head->next = second;
    second->next = third;

    // Deleting a node with value 20
    int keyToDelete = 20;
    head = deleteNode(head, keyToDelete);

    // Optionally, print the list or further actions could be done here.

    return 0;
}