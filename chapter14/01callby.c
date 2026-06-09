#include <stdio.h>

void increase(        ); // 가이드: int origin, int increment
void incbyaddress(        ); // 가이드: int* origin, int increment

int main(void)
{
	int amount = 10;
	increase(        ); // 가이드: amount, 20
	printf("%d\n", amount);

	amount = 100;
	// 가이드: amount의 주소와 증가할 값을 인자로 전달
	incbyaddress(        ); // 가이드: &amount, 20
	printf("%d\n", amount);

	return 0;
}

void increase(        ) // 가이드: int origin, int increment
{
	// 가이드: 값에 의한 호출이므로 origin만 증가
	
}
void incbyaddress(        ) // 가이드: int* origin, int increment
{
	//*origin은 origin이 가리키는 변수 자체
	// 가이드: origin이 가리키는 변수 값이 increment만큼 증가
	
}
