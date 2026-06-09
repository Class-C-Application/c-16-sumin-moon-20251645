#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#include <stdlib.h> //rand(), srand()를 위한 헤더파일 포함
#include <time.h>   //time()을 위한 헤더파일 포함

// MAX라는 이름으로 정수 100을 나타내는 매크로 상수를 정의하세요

// 정답이 저장될 int형 전역변수 guess를 선언하세요
int testNum(int input); //전방 선언

int main(void)
{
	// int형 지역변수 input을 선언하세요

	// srand((long)time(NULL)); 로 난수 씨앗을 설정하세요
	// rand() % MAX + 1 을 guess에 저장해 정답을 지정하세요

	// printf("1에서 %d 사이에서 한 정수가 결정되었습니다.\n", MAX); 형식으로 출력하세요
	// printf("이 정수는 무엇일까요? 입력해 보세요. : "); 로 입력 안내를 출력하세요

	// scanf("%d", &input)을 조건으로 하는 while문을 작성하세요
	//   testNum(input)의 반환값으로 switch문을 작성하세요
	//     case 0: puts("정답입니다."); break;
	//     case -1: printf("입력한 수보다 작습니다. 다시 입력하세요. : "); break;
	//     case 1: printf("입력한 수보다 큼니다. 다시 입력하세요. : "); break;

	return 0;
}
