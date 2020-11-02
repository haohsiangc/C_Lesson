#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct list {
	char data;
	struct list *nextPtr;
} List;
void printList(List *n);
int main() {
	List *head = malloc(sizeof(List));
	List *second = malloc(sizeof(List));
	List *third = malloc(sizeof(List));
	strcpy(head.data,"A");
	head->nextPtr = second;
	strcpy(second.data,"B");
	second->nextPtr = third;
	strcpy(third.data,"C");
	third->nextPtr = NULL;
	printList(head);
	return 0;
}
void printList(List *n) {
	while (n != NULL) {
		printf("%c-->", n->data);
		n = n->nextPtr;
	}
	puts(NULL);
}