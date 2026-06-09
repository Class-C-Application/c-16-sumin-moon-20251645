#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 가이드: 문자열 name과 다음 노드 포인터 next를 가진 자기참조 구조체를 정의하세요.
struct linked_list {
    char* name;
    [                   ] next;
};

// 가이드: struct linked_list를 NODE로, NODE*를 LINK로 재정의하세요.
typedef [                  ] NODE;
typedef [                  ] LINK;

LINK createNode(char* name);
LINK append(LINK head, LINK cur);
int printList(LINK head);
