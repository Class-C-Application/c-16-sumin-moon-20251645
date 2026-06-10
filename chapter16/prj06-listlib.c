#include "prj06-linkedlist.h"

LINK createNode(char* name)
{
    LINK cur;

    // 가이드: NODE 하나를 동적 할당하세요.
    cur = (LINK)malloc( sizeof(NODE) );
    if (cur == NULL)
    {
        printf("노드 생성을 위한 메모리 할당에 문제가 있습니다.\n");
        return NULL;
    }

    // 가이드: name 문자열 길이 + 1만큼 동적 할당하고 문자열을 복사하세요.
    cur->name = (char*)malloc(sizeof(char) * (strlen(name) + 1));
    strcpy(cur->name, name);
    cur->next = NULL;

    return cur;
}

LINK append(LINK head, LINK cur)
{
    LINK nextNode = head;

    // 가이드: 빈 리스트라면 새 노드가 head가 됩니다.
    if (head == NULL)
    {
        head = cur;
        return head;
    }

    // 가이드: 마지막 노드까지 이동한 뒤 cur를 연결하세요.
    while (nextNode->next != NULL)
    {
        nextNode = nextNode->next;
    }
    nextNode->next = cur;

    return head;
}

int printList(LINK head)
{
    int cnt = 0;
    LINK nextNode = head;

    // 가이드: head부터 NULL까지 순회하며 노드의 문자열을 출력하세요.
    while (nextNode != NULL)
    {
        // nextNode가 가리키는 구조체의 name 멤버 출력
        printf("%3d번째 노드는 %s\n", ++cnt, nextNode->name);
        nextNode = nextNode->next;
    }

    return cnt;
}
