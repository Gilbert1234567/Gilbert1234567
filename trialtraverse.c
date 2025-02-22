#include<stdio.h>
#include<stdlib.h>
struct Node
{
	int data;
	struct Node* next;
};
void traverseList(struct Node* head)
{
	struct Node* temp = head;
	while(temp!=NULL){
	
	printf("%d->",temp->next);
	temp = temp->next;
}
printf("NULL.\n");
}
struct Node* createNode(int data)
{
	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
	newNode ->data = data;
	newNode ->next = NULL;
	return newNode;
	
}
int main()
{
	struct Node* head = createNode(10);
	struct Node* second = createNode(20);
	struct Node* third = createNode(30);
	
	head->next =second;
	second->next = third;
	
	printf("Linkedlist:");
	traverseList(head);
	
	return 0;
}