#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "DLL.h"


//공백 리스트 형성
linkedList_h *createLinkedList_h(void){
	linkedList_h *DL;
	DL = (linkedList_h*)malloc(sizeof(linkedList_h));
	DL -> head = NULL;
	return DL;
}

//리스트 출력 함수
void printList(linkedList_h *DL){
	listNode *temp;

	printf("DL = (");

	
		temp = DL -> head;
		while(temp !=NULL){
			printf("%s",temp -> data);
			temp = temp ->rlink;
			if( temp !=NULL)

				printf(",");
			}
		
		printf(")\n");
	}


// 리스트 탐색 함수
listNode *searchNode(linkedList_h *DL,char *x){
	listNode *temp;

	temp = DL ->head;
	while(temp !=NULL){
		if(strcmp(temp->data,x)==0) return temp;
		else temp = temp ->rlink;
	}
	return temp;
}

// 리스트에 노드를 추가하는 함수
void insertNode(linkedList_h *DL,listNode *pre,char *x){
	listNode *temp;

	temp = (listNode*)malloc(sizeof(listNode));

	strcpy(temp -> data ,x);

	if(DL -> head ==NULL){

	temp -> llink =NULL;
	temp -> rlink =NULL;
	DL -> head = temp;
	}
	else {
		temp -> rlink = pre -> rlink;
		pre -> rlink = temp;
		temp -> llink = pre;
			if(temp -> rlink !=NULL)
				temp -> rlink -> llink = temp;
	}
}
// 리스트의 노드를 삭제하는 함수
void deletNode(linkedList_h *DL,listNode *old){
	listNode *pre;
	 
	if( DL -> head ==NULL) return;
	else if(old == NULL) return;
	else{
		old -> rlink ->llink = old -> llink;
		pre -> llink ->rlink  = old -> rlink;
		free(old);
	}
}





