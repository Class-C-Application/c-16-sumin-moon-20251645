#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void add(        , double, double); // 가이드: 첫 매개변수는 결과를 저장할 double 포인터
void subtract(        , double, double); // 가이드: 첫 매개변수는 결과를 저장할 double 포인터

int main(void)
{
	// 가이드: double 포인터, double, double을 매개변수로 받고 반환값이 없는 함수 포인터 pf 선언
	void (*pf)(        , double, double) = NULL;

	double m, n, result = 0;
	printf("연산 +, -를 수행할 실수 2개를 입력하세요. >> ");
	scanf("%lf %lf", &m, &n);

	pf = ; //add() 함수를 함수 포인터 pf에 저장 
	pf(        , m, n);  //가이드: 첫 인자로 result의 주소 전달
	printf("\n더하기 수행: %lf + %lf == %lf\n", m, n, result);
	printf("%p %p\n", pf, add);

	pf = ; //subtract() 함수를 함수 포인터 pf에 저장
	pf(        , m, n);  //가이드: 첫 인자로 result의 주소 전달
	printf("  빼기 수행: %lf - %lf == %lf\n", m, n, result);
	printf("%p %p\n", pf, subtract);

	return 0;
}

// x + y 연산 결과를 z가 가리키는 변수에 저장하는 함수 
void add(        , double x, double y) // 가이드: 첫 매개변수는 double* z
{
	// 가이드: z가 가리키는 변수에 x + y 저장
	
}
// x - y 연산 결과를 z가 가리키는 변수에 저장하는 함수 
void subtract(        , double x, double y) // 가이드: 첫 매개변수는 double* z
{
	// 가이드: z가 가리키는 변수에 x - y 저장
	
}
