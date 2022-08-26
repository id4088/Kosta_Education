#include <stdio.h>
#include "insertLinkedList.h"

int main(void){
	linkedList_h *L;
	listNode *p;

	L = createLinkedList_h();
	printf("(1) 공백 리스트 생성하기! \n");
	printList(L);

	printf("\n(2) 리스트에 [수] 노드 삽입하기! \n");
	insertFirstNode(L,"수");
	printList(L);

	printf("\n(3) 리스트 마지막에 [금] 노드 삽입하기! \n");
	insertLastNode(L,"금");
	printList(L);

	printf("\n(4) 리스트 첫 번째에 [월] 노드 삽입하기! \n");
	insertFirstNode(L,"월");
	printList(L);

	printf("\n(5) 리스트에서 [수] 노드 탐색하기! \n");
	p = searchNode(L,"수");
	if (p ==NULL) printf("찾는 데이터가 없습니다.\n");
	else printf("[%s}를 찾았습니다.\n", p ->data);

	printf("\n(6) 리스트에서 [수]노드 삭제하기! \n");
	p =searchNode(L,"수");
	deletNode(L,p);
	printList(L);

	printf("\n(7) 리스트 순서를 역순으로 바꾸기! \n");
	reverse(L);
	printList(L);


	printf("\n(8) 리스트 공간을 해제하여 공백 리스트로 만들기! \n");
	freeLinkedList_h(L);
	printList(L);

	getchar();return 0;
}


