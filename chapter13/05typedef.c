#include <stdio.h>

//함수 외부에서 정의된 자료형은 이후 파일에서 사용 가능
[                        ];	// 가이드: unsigned int를 budget으로 재정의

int main(void)
{
	budget year = 24500000;

	//함수 내부에서 정의된 자료형은 이후 함수내부에서만 사용 가능
	[               ];	// 가이드: int를 profit으로 재정의
	profit month = 4600000;
	printf("올 예산은 %d, 이달의 이익은 %d 입니다.\n", year, month);

	return 0;
}

void test(void)
{
	budget year = 24500000;
}
