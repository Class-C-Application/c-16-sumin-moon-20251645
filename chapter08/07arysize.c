#include <stdio.h>

int main(void)
{
	// 3, 4, 5, 7, 9로 초기화된 int형 배열 data를 선언하세요
	printf("%d %d\n", sizeof(data), (int) sizeof(data[0]));
	printf("배열 data 크기 == %d\n", (int) (sizeof(data) / sizeof(data[0])));

	//4 x 3 행렬
	// 열 크기가 2인 double형 2차원 배열 x를 { {1.2, 2.3}, {7.3, 8.9} }로 초기화하세요
	printf("%d %d ", (int) sizeof(x), (int) sizeof(x[0]));
	printf("%d %d\n", (int) sizeof(x[1]), (int) sizeof(x[0][0]));
	// sizeof를 사용해 x의 행수를 저장하는 int형 변수 rowsize를 선언하세요
	// sizeof를 사용해 x의 열수를 저장하는 int형 변수 colsize를 선언하세요
	printf("이차원 배열 x: 행수 = %d  열수 = %d\n", rowsize, colsize);
	printf("이차원 배열 x: 전체 원소 수 = %d\n", (int) (sizeof(x) / sizeof(x[0][0])));

	return 0;
}
