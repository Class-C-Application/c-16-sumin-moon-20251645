#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

typedef struct book
{
	char  title[50];
	char  author[50];
	int   ISBN;
} book;

void print(        ); // 가이드: book 구조체 포인터를 매개변수로 선언

int main()
{
	book python = { "파이썬으로 배우는 누구나 코딩", "강환수", 979117 };
	book comintro;
	// 가이드: strcpy로 title, author를 저장하고 ISBN을 대입
	strcpy(        , "소프트웨어 중심사회의 컴퓨터개론"); // 가이드: comintro의 title 멤버
	strcpy(        , "강환수"); // 가이드: comintro의 author 멤버
	comintro.ISBN = ;
	print(        ); // 가이드: comintro의 주소 전달
	print(        ); // 가이드: python의 주소 전달

	return 0;
}

void print(        ) // 가이드: book* b
{
	printf("제목: %s, ",        ); // 가이드: 구조체 포인터 b로 title 멤버 접근
	printf("저자: %s, ",        ); // 가이드: 구조체 포인터 b로 author 멤버 접근
	printf("ISBN: %d\n",        ); // 가이드: 구조체 포인터 b로 ISBN 멤버 접근
}
