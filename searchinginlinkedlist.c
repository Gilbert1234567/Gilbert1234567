#include<stdio.h>
#include<stdlib.h>

struct Node 
{
	int data;
	struct Node* next;
};

void searchList(struct Node* head, int target)
{
	struct Node* temp = head;
	while (temp != NULL) {
		if (temp->data == target) {
			printf("Found %d in the list.\n", target);
			return;
		}
		temp = temp->next;
	}
	printf("Value %d not found in the list.\n", target);
}

struct Node* createNode(int data)
{
	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
	newNode->data = data;
	newNode->next = NULL;  // Make sure the next pointer is NULL for the new node
	return newNode;
}

int main()
{
	struct Node* head = createNode(10);
	struct Node* second = createNode(20);
	struct Node* third = createNode(30);

	// Linking the nodes
	head->next = second;
	second->next = third;

	// Test search functionality
	int target = 20;
	printf("Searching for %d: ", target);
	searchList(head, target);  // Search for a value in the list

	target = 40;
	printf("Searching for %d: ", target);
	searchList(head, target);  // Search for a non-existent value
	return 0;
}