#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void add(        , double, double); // 가이드: 첫 매개변수는 결과를 저장할 double 포인터
void subtract(        , double, double);
void multiply(        , double, double);
void devide(        , double, double);

int main(void)
{
	char op[4] = { '+', '-', '*', '/' };
	//함수 포인터 선언하면서 초기화 과정 
	// 가이드: 반환값이 없고, double 포인터와 double 2개를 매개변수로 받는 함수 포인터 배열 선언
	void (*fpary[4])(        , double, double) = {        ,        ,        ,         };

	double m, n, result;
	printf("사칙연산을 수행할 실수 2개를 입력하세요. >> ");
	scanf("%lf %lf", &m, &n);
	//사칙연산을 배열의 첨자를 이용하여 수행
	for (int i = 0; i < 4; i++)
	{
		fpary[i](        , m, n); // 가이드: 첫 인자로 result의 주소 전달
		printf("%.2lf %c %.2lf == %.2lf\n", m, op[i], n, result);
	}

	return 0;
}

// x + y 연산 결과를 z가 가리키는 변수에 저장하는 함수 
void add(        , double x, double y) // 가이드: 첫 매개변수는 double* z
{
	
}
// x - y 연산 결과를 z가 가리키는 변수에 저장하는 함수 
void subtract(        , double x, double y) // 가이드: 첫 매개변수는 double* z
{
	
}
// x * y 연산 결과를 z가 가리키는 변수에 저장하는 함수 
void multiply(        , double x, double y) // 가이드: 첫 매개변수는 double* z
{
	
}
// x / y 연산 결과를 z가 가리키는 변수에 저장하는 함수 
void devide(        , double x, double y) // 가이드: 첫 매개변수는 double* z
{
	
}
