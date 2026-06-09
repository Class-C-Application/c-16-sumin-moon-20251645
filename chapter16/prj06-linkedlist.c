#include "prj06-linkedlist.h"

LINK createNode(char* name);
LINK append(LINK head, LINK cur);
int printList(LINK head);

int main(void)
{
	char name[30];		//표준입력으로 받은 프로그램 이름 문자열을 저장할 문자 배열
	LINK head = NULL;	//연결 리스트의 헤드로 사용
	LINK cur;			//현재 새로이 생성된 노드를 가리키는 포인터

	printf("이름을 입력하고 Enter를 누르세요. >> \n");
	while (fgets(name, sizeof(name), stdin) != NULL)
	{
		cur = createNode(name);		//노드 동적 할당
		if (cur == NULL) {
			printf("동적메모리 할당에 문제가 있습니다.\n");
			exit(1);
		}
		head = append(head, cur);	//맨 뒤에 노드 추가
		printList(head);			//연결 리스트 모두 출력
	}

	return 0;
}
