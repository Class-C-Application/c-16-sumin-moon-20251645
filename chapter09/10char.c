#define _CRT_SECURE_NO_WARNINGS //scanf() 오류를 방지하기 위한 상수 정의
#include <stdio.h>
#include <ctype.h> //문자 관련 함수는 헤더파일 ctype.h에 매크로로 정의

// void print2char(char); 함수원형을 선언하세요

int main(void)
{
	// char형 변수 ch를 선언하세요

	printf("알파벳(종료x) 또는 다른 문자 입력하세요.\n");
	// do-while 반복문을 작성하세요 (종료 조건: ch가 'x' 또는 'X')
	// 반복 내부:
	//   printf("문자 입력 후 Enter: "); 출력
	//   scanf("%c", &ch); 로 문자 입력
	//   getchar(); 로 enter 키 처리
	//   isalpha(ch)가 참이면 print2char(ch) 호출
	//   아니면 printf("입력: %c\n", ch); 출력

	return 0;
}

// void print2char(char ch) 함수를 정의하세요
// isupper(ch)가 참이면 printf("입력: %c, 변환: %c\n", ch, tolower(ch)); 출력
// 아니면 printf("입력: %c, 변환: %c\n", ch, toupper(ch)); 출력
