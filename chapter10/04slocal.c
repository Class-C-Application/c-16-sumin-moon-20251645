#include <stdio.h>

void reset(void); //함수원형
void count(void); //함수원형

int main(void)
{
	//자동 지역변수
	// i를 1로 초기화해 i <= 5 동안 i를 증가시키는 for문을 작성하고
	//   각 반복에서 reset()과 count()를 호출하세요
}

void reset(void) //매번 1을 지정
{
	// auto 키워드를 사용해 정수형 지역변수 n을 1로 선언하세요
	// printf("자동 지역변수 n: %2d\n", n); 형식으로 n을 출력하세요
	// n을 1 증가시키세요
}

void count(void) //이전 값을 계속 누적
{
	// static 키워드를 사용해 정수형 지역변수 s를 10으로 선언하세요
	// printf("\t정적 지역변수 s: %2d\n", s); 형식으로 s를 출력하세요
	// s를 1 증가시키세요
}
