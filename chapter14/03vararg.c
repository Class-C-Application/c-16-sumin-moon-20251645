#include <stdio.h>
#include <stdarg.h> //가변인자를 위한 헤더 파일

double avg(        ); // 가이드: 첫 매개변수 뒤에 가변인자 ... 선언

int main(void)
{
	printf("평균 %.2f\n", avg(5, 1.2, 2.1, 3.6, 4.3, 5.8));
	printf("평균 %.2f\n", avg(6, 1.0, 2.0, 3.0, 4.0, 5.0, 6.0));

	return 0;
}

//가변인자 ... 시작 전 첫 고정 매개변수는 가변인자를 처리하는데 필요한 정보를 지정
double avg(        ) // 가이드: int numagrs, ... 
{
	double total = 0; //합이 저장될 변수

	// 1. 가변인자 변수 선언
	
	// 2. numargs 이후의 가변인자 처리 시작
	
	for (int i = 0; i < numagrs; i++) //3. 가변인자 얻기
		// 가이드: double 형 가변인자를 하나씩 꺼내 total에 더하기
		total += ;
	// 4. 가변인자 처리 종료
	

	return ;
}
