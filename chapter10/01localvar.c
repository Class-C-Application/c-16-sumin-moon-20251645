#include <stdio.h>

void sub(int param); //함수 원형

int main(void)
{
	// auto 키워드를 사용해 정수형 지역변수 n을 10으로 선언하세요
	// printf("%d\n", n); 형식으로 n을 출력하세요

	//m, sum은 for 문 내부의 블록 지역변수
	// m을 0, sum을 0으로 초기화하고 m < 3 동안 m을 증가시키는 for문을 작성하세요
	//   for 문 내부에서 sum += m 연산을 수행하고
	//   printf("\t%d %d\n", m, sum); 형식으로 m과 sum을 출력하세요

	// printf("%d\n", n); 형식으로 n을 출력하세요 (n 참조 가능)
	//printf("%d %d\n", m, sum); //m, sum 참조 불가능

	// sub(20) 함수를 호출하세요

	return 0;
}

void sub(int param) //매개변수인 param도 지역 변수로 사용
{
	// auto 키워드를 사용해 정수형 지역변수 local을 100으로 선언하세요
	// printf("\t%d %d\n", param, local); 형식으로 param과 local을 출력하세요
	//printf("%d\n", n); //n 참조 불가능
}
