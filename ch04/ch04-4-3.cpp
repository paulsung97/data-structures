#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct LisrNode {
	char data[4];
	struct LisrNode* link;
}listNode;

typedef struct {
	listNode* head;
} linkedList_h;


linkedList_h* createLinkedList_h(void) {
	linkedList_h* CL;
	CL = (linkedList_h*)malloc(sizeof(linkedList_h));
	CL->head = NULL;
	return CL;
}

void printList(linkedList_h* CL) {
	listNode* p;
	printf("CL = ( ");
	p = CL->head;
	do {
		printf("%s", p->data);
		p = p->link;
		if (p != CL->head)printf(", ");
	} while (p != CL->head);
	printf(")\n");
}

co