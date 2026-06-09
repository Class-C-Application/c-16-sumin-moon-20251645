#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 

void multiply(double*, const double*, const double*);
void devideandincrement(double*, double*, double*);

int main(void)
{
	double m = 0, n = 0, mult = 0, dev = 0;

	printf("두 실수 입력: ");
	scanf("%lf %lf", &m, &n);
	// 가이드: 결과 변수와 입력 변수의 주소를 전달
	multiply(        , &m, &n);
	devideandincrement(        , &m, &n);
	printf("두 실수 곱: %.2f, 나눔: %.2f\n", mult, dev);
	printf("연산 후 두 실수: %.2f, %.2f\n", m, n);

	return 0;
}

//매개변수 포인터 a, b가 가리키는 변수의 내용을 곱해 result가 가리키는 변수에 저장
//매개변수 포인터 a, b가 가리키는 변수의 내용은 수정하지 못함
void multiply(double* result, const double* a, const double* b)
{
	// 가이드: a와 b가 가리키는 값을 곱해 result가 가리키는 변수에 저장
	
	//*a = *a + 1; //오류발생
	//*b = *b + 1; //오류발생
}

//매개변수 포인터 a, b가 가리키는 변수의 내용을 나누어 result가 가리키는 변수에 저장한 후
//a, b가 가리키는 변수의 내용을 모두 1 증가시킴
void devideandincrement(double* result, double* a, double* b)
{
	// 가이드: 나눗셈 결과 저장 후 a와 b가 가리키는 값을 각각 1 증가
	
}
