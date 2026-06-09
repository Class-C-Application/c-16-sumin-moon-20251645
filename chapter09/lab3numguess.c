#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> //rand(), srand()를 위한 헤더파일 포함
#include <time.h>   //time()을 위한 헤더파일 포함

// MAX라는 이름으로 정수 100을 나타내는 매크로 상수를 정의하세요

int main(void)
{
	// int형 변수 guess, input을 선언하세요

	// srand((long)time(NULL)); 으로 시드를 설정하세요
	// rand() % MAX + 1 으로 1~MAX 범위의 난수를 guess에 저장하세요

	// printf("1에서 %d 사이에서 한 정수가 결정되었습니다.\n", MAX); 형식으로 출력하세요
	// printf("이 정수는 무엇일까요? 입력해 보세요. : "); 형식으로 출력하세요

	// while (scanf("%d", &input)) 반복문을 작성하세요
	// input > guess 이면 printf("입력한 수 %d보다 작습니다. 다시 입력하세요. : ", input); 출력
	// input < guess 이면 printf("입력한 수 %d보다 큼니다. 다시 입력하세요. : ", input); 출력
	// 같으면 puts("정답입니다."); 출력 후 break

	return 0;
}
