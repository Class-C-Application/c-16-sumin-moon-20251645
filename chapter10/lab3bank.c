#include <stdio.h>

//전역변수
// 정수형 전역변수 total을 10000으로 선언하세요

//입금 함수원형
void save(int);
//출금 함수원형
void withdraw(int);

int main(void)
{
	// printf(" 입금액  출금액   총입금액   총출금액     잔고\n"); 를 출력하세요
	// printf("===============================================\n"); 를 출력하세요
	// printf("%46d\n", total); 형식으로 total을 출력하세요
	// save(50000), withdraw(30000), save(60000), withdraw(20000) 순서로 호출하세요
	// printf("===============================================\n"); 를 출력하세요

	return 0;
}

//입금액을 매개변수로 사용
void save(int money)
{
	//총입금액이 저장되는 정적 지역변수
	// static 키워드를 사용해 정수형 변수 amount를 선언하세요
	// total += money 연산을 수행하세요
	// amount += money 연산을 수행하세요
	// printf("%7d %17d %20d\n", money, amount, total); 형식으로 출력하세요
}

//출금액을 매개변수로 사용
void withdraw(int money)
{
	//총출금액이 저장되는 정적 지역변수
	// static 키워드를 사용해 정수형 변수 amount를 선언하세요
	// total -= money 연산을 수행하세요
	// amount += money 연산을 수행하세요
	// printf("%15d %20d %9d\n", money, amount, total); 형식으로 출력하세요
}
