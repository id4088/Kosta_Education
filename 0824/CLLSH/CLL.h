#pragma once

//원형 연결 리스트의 노드 구조를 구조체로 정의

typedef struct ListNode{
	char data[4];
	struct ListNode *link;
} listNode;

typedef struct{
	listNode *head;
} linkedList_h;

linkedList_h *createLinkedList_h(void);

void printList(linkedList_h *CL);
void insertFirstNode(linkedList_h *CL, char *x);
void insertMiddleNode(linkedList_h *CL,listNode *pre, char *x);
void deletNode(linkedList_h * CL, listNode *old);

listNode *searchNode(linkedList_h * CL, char *x);
