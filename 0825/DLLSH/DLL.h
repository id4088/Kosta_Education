#pragma once

typedef struct ListNode{
	struct ListNode *llink;
	char data[4];
	struct ListNode *rlink;
}listNode;

typedef struct {
	listNode *head;
}linkedList_h;

// 공백 리스트 형성
linkedList_h *createLinkedList_h(void);

// 리스트 출력
void printList(linkedList_h *DL);

// 노드 탐색
listNode *searchNode(linkedList_h *DL,char *x);

// 새로운 노드 추가
void insertNode(linkedList_h *DL,listNode *pre,char *x);

// 노드 제거
void deletNode(linkedList_h *DL,listNode *old);



