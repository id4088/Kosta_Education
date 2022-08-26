#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "insertLinkedList.h"

//공백 연결 리스트를 생성하는 연산

linkedList_h *createLinkedList_h(void){
	linkedList_h *L;
	L = (linkedList_h*)malloc(sizeof(linkedList_h));
	L ->head =NULL; //공백 리스트 이므로 NULL로 설정
	return L;
}

//연결 리스트의 전체 메모리를 해제하는 연산

void freeLinkedList_h(linkedList_h *L){
	listNode *p;
	while (L -> head!= NULL){
		p = L ->head;
	    L -> head = L -> head -> link;
		free(p);
		p= NULL;
	}
}

// 연결 리스트를 순서대로 출력하는 연산

void printList(linkedList_h *L){
	listNode *p;
	printf("L =(");
	p = L -> head;
	while (p!= NULL){
		printf("%s", p -> data);
		p = p->link;
		if (p != NULL) printf(",");
	}
	printf(") \n");
}

// 첫 번째 노드로 삽입하는 연산
void insertFirstNode(linkedList_h *L, char *x){
	listNode *newNode;
	newNode = (listNode*)malloc(sizeof(listNode));
	strcpy(newNode -> data,x);
	newNode ->link =L ->head;
	L -> head =newNode;
}

// 리스트에서 노드 p를 삭제하는 연산
void deletNode(linkedList_h *L, listNode *p){
	listNode *pre;					 //삭제할 노드의 선행 노드를 나타내는 포인터
	if(L -> head == NULL) return;
	if(L -> head -> link ==NULL){    //리스트에 노드가 하나만 있는 경우
		free(L -> head);
		L -> head =NULL;
			return;
	}
	else if (p==NULL) return;
	else {
		pre = L -> head;
		while (pre -> link !=p){
			pre = pre ->link;
		}
		pre -> link = p -> link;
		free(p);
	}
}

// 리스트에서 x 노드를 탐색하는 연산
listNode *searchNode(linkedList_h *L,char *x){
	listNode *temp;
	temp = L -> head;
	while (temp != NULL){
		if (strcmp(temp -> data,x) == 0) return temp;
		else temp = temp -> link;
	}
	return temp;
}


// 리스트의 노드 순서를 역순으로 바꾸는 연산
void reverse(linkedList_h *L){
	listNode *pre;
	listNode *temp;
	listNode *reverse;

	pre = L -> head;
	temp = NULL;
	reverse = NULL;

	while (p != NULL){
		reverse=temp;
		temp=pre;
		pre = pre -> link;
		temp -> link =revserse;
	}
	L -> head =temp;
}

// 노드를 pre 뒤에 삽입하는 연산
void insertMiddleNode(linkedList_h *L,listNode *pre,char *x){
	listNode *newNode;
	newNode = (listNode*)malloc(sizeof(listNode));
	strcpy(newNode -> data,x);
	if (L -> head ==NULL){
		newNode -> link =NULL;
		L -> head = newNode;
	}
	else if(pre ==NULL){
		newNode -> link = L ->head;
			L -> head =newNode;
	}
	else{
		newNode -> link =pre -> link;
		pre -> link =newNode;
	}
}

// 마지막 노드로 삽입하는 연산
void insertLastNode(linkedList_h *L, char *x){
	listNode *newNode;
	listNode *temp;
	newNode = (listNode*)malloc(sizeof(listNode));
	strcpy(newNode -> data,x);
	newNode -> link =NULL;
	if( L-> head ==NULL){ //현재 리스트가 공백인 경우
		L -> head = newNode;  // 새 노트를 시작 노트로 연결
		return;
	}
	// 현재 리스트가 공백이 아닌 경우
	temp = L -> head;
	while (temp -> link!=NULL) temp = temp -> link;//현재 리스트의 마지막 노드를 찾음
	temp ->link =newNode;
}







