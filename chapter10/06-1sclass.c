#include <stdio.h>

void in(void);
void out(void);

/* 전역변수 */
// 정수형 전역변수 g를 10으로 선언하세요
/* 정적 전역변수 */
// static 키워드를 사용해 정수형 전역변수 sg를 20으로 선언하세요

int main(void)
{
	/* main() 함수의 자동 지역변수 */
	// auto 키워드를 사용해 정수형 지역변수 a를 100으로 선언하세요

	// printf("%d %d %d\n", g, sg, a); 형식으로 g, sg, a를 출력하세요
	// in(); out(); 을 3회 반복 호출하세요
	// printf("%d %d %d\n", g, sg, a); 형식으로 최종 g, sg, a를 출력하세요

	return 0;
}

void in(void)
{
	/* in() 함수의 자동 지역변수 */
	// auto 키워드를 사용해 정수형 지역변수 fa를 1로 선언하세요
	/* in() 함수의 정적 지역변수 */
	// static 키워드를 사용해 정수형 지역변수 fs를 선언하세요 (초기값 0)

	// printf("\t%d %d %d %d\n", ++g, ++sg, ++fa, ++fs); 형식으로 출력하세요
}
