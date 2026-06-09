#include <stdio.h>

void myprint(void)
{
	printf("void 포인터 신기하네요!\n");
}

int main(void)
{
	int m = 10;
	double d = 3.98;
	char str[][20] = { { "C 언어," }, { "재미있네요!" } };

	void* p = ; // 가이드: 정수 변수 m의 주소 저장
	printf("%p ", p); //주소 값 출력
	//printf("%d\n", *p); //컴파일 오류 발생
	printf("%d\n",        ); // 가이드: p를 int 포인터로 형변환한 후 역참조

	p = ; // 가이드: 실수 변수 d의 주소 저장
	printf("%p ", p); //주소 값 출력
	printf("%.2f\n",        ); // 가이드: p를 double 포인터로 형변환한 후 역참조

	p = ; // 가이드: myprint 함수의 주소 저장
	(        )(); // 가이드: p를 함수 포인터인 void(*)(void)로 형변환하여 호출

	p = ; // 가이드: 2차원 문자 배열 str의 시작 주소 저장
	//열이 20인 이차원 배열로 변환하여 1행과 1행의 문자열 출력
	printf("%s %s\n",        ,        ); // 가이드: p를 열 크기 20인 문자 배열 포인터로 형변환
	printf("%s %s\n",        ,        ); // 가이드: 배열 이름과 다음 행의 주소를 전달

	{
		char ch = 'A';
		int data = 5;
		double value = 34.76;

		;	// 가이드: void 포인터 변수 vp 선언

		vp = ;	// 가이드: 문자 변수 ch의 주소 저장
		vp = ;	// 가이드: 정수 변수 data의 주소 저장
		vp = ;	// 가이드: 실수 변수 value의 주소 저장
	}
	return 0;
}
