#include<stdio.h>
#include<stdlib.h>

struct Node 
{
	int data;
	struct Node* Next;
	
};
void traverseList(struct node* head)
{
	struct Node* temp = head;
	while(temp!=NULL){
		printf("%d->" ,temp ->data);
		temp = temp -> next;
	}
	printf("NULL.\n");
}
struct Node* createNode(int data)
{
	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
	newNode -> data = data;
	newNode ->next = data;
	return newNode;
}
int main()
{
	struct Node* head = createNode(10);
	struct Node*second = createNode(20);
	struct Node*third = createNode(30);
	head -> next = second;
	second -> next = third;
	printf("linkedlist:");
	traverse:
		return 0;
	
}