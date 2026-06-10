#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 

// 자기참조 구조체 정의
struct linked_list { 
    char* name; 
    struct linked_list* next; // 빈칸 1: 다음 노드를 가리키는 자기참조 포인터
}; 

// typedef 재정의
typedef struct linked_list NODE; // 빈칸 2
typedef struct linked_list* LINK; // 빈칸 3: NODE* 와 같은 의미의 포인터 타입

LINK createNode(char* name); 
LINK append(LINK head, LINK cur); 
int printList(LINK head);
