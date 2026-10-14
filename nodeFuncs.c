#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
	int data;
	struct Node* next;
} Node;

Node* createNode(int data) {
	Node* newNode = (Node*)malloc(sizeof(Node));
	newNode->data = data;
	newNode->next = NULL;
	return newNode;
}

Node* append(Node* head, Node* newNode) {
	if(head == NULL) {
		return newNode;
	}
	Node* temp = head;
	while (temp->next != NULL) {
		temp = temp->next;
	}
	temp->next = newNode;
	return head;
}

Node* insert_sorted(Node*  head, Node* newNode) {
	if(head == NULL || head->data >= newNode->data) {
		newNode->next = head;
		return newNode;
	}

	Node* temp = head;
	while (temp ->next != NULL && temp->next->data < newNode->data) {
		temp = temp->next;
	}
	newNode->next = temp->next;
	temp->next = newNode;
	return head;
}
Node* traverse(Node* head) {
	Node* temp = head;
	while (temp != NULL) {
		printf("%d -> ", temp->data);
		temp = temp->next;
	}
	printf("NULL\n");
	return head;
}

Node* search(Node* head, int key) {
	Node* temp = head;
	while (temp != NULL) {
		if (temp->data == key) {
			return temp;
		}
		temp = temp->next;
	}
	return NULL;
}

int main(int argc, char* argv[]) {
	srand(2);
	
	int n = 5;
	int data;

	Node* head = NULL;
	for (int i = 0; i < n; i++) {
		data = rand() % 10;
		Node* newNode = createNode(data);
		head = append(head, newNode);
	}

	traverse(head);

	int key;
	printf("Enter the value to search: ");
	scanf("%d", &key);
	Node* foundNode = search(head, key);
	if (foundNode != NULL) {
		printf("Node with data %d found.\n", key);
	} else {
		printf("Node with data %d not found.\n", key);
	}

	return 0;
}
