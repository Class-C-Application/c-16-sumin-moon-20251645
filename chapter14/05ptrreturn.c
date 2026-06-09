#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 

int* add(int*, int, int);
int* subtract(int*, int, int);
int* multiply(int, int);

int main(void)
{
	int m = 0, n = 0, sum = 0, diff = 0;

	printf("두 정수 입력: ");
	scanf("%d %d", &m, &n);

	printf("두 정수 합: %d\n", *add(        , m, n));
	printf("두 정수 차: %d\n", *subtract(        , m, n));
	printf("두 정수 곱: %d\n", *multiply(m, n));

	return 0;
}

int* add(int* psum, int a, int b)
{
	// 가이드: psum이 가리키는 변수에 합 저장
	
	return psum;
}
int* subtract(int* pdiff, int a, int b)
{
	// 가이드: pdiff가 가리키는 변수에 차 저장
	
	return pdiff;
}
int* multiply(int a, int b)
{
	int mult = ;
	return &mult;
}
