#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 

void add(        ); // 가이드: int* psum, int a, int b

int main(void)
{
	int m = 0, n = 0, sum = 0;

	printf("두 정수 입력: ");
	scanf("%d %d", &m, &n);
	// 가이드: sum의 주소, m, n을 인자로 전달
	add(        , m, n);
	printf("두 정수 합: %d\n", sum);

	return 0;
}

void add(        ) // 가이드: int* psum, int a, int b
{
	// 가이드: psum이 가리키는 변수에 a와 b의 합 저장
	
}
