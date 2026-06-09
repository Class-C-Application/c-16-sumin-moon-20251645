#include <stdio.h>

void out()
{
	// extern 키워드를 사용해 외부 파일에 선언된 int형 전역변수 g와 sg를 선언하세요

	// printf("\t\t\t%d\n", ++g); 형식으로 g를 증가시켜 출력하세요

	//외부 파일에 선언된 정적 전역변수이므로 실행 시 오류
	//printf("%d\n", ++sg);
}
