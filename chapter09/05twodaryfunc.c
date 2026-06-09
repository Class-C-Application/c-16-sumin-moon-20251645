#include <stdio.h>

// double sum(double data[][2], int, int); 함수원형을 선언하세요 (2차원 배열값을 모두 더하는 함수)
// void printarray(double data[][2], int, int); 함수원형을 선언하세요 (2차원 배열값을 모두 출력하는 함수)

int main(void)
{
	//3 x 2 행렬을 위한 이차원 배열 선언 및 초기화
	// double x[][2]를 { { 11, 12 }, { 21, 22 }, { 31, 32 } }으로 초기화하세요

	// sizeof(x) / sizeof(x[0])으로 행 크기를 int형 변수 rowsize에 저장하세요
	// sizeof(x[0]) / sizeof(x[0][0])으로 열 크기를 int형 변수 colsize에 저장하세요
	printf("2차원 배열의 자료값은 다음과 같습니다.\n");
	// printarray(x, rowsize, colsize)를 호출하세요
	// printf("2차원 배열 원소합은 %.3lf 입니다.\n", sum(x, rowsize, colsize)); 형식으로 출력하세요

	return 0;
}

//배열값을 모두 더하는 함수
// double sum(double data[][2], int rowsize, int colsize) 함수를 정의하세요
// 이중 for문으로 모든 원소를 total에 누적하고 return 하세요

//배열값을 모두 출력하는 함수
// void printarray(double data[][2], int rowsize, int colsize) 함수를 정의하세요
// 이중 for문으로 printf("x[%d][%d] = %5.2lf   ", i, j, data[i][j]); 형식으로 출력하세요
