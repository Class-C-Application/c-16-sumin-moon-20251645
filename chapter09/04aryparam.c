#include <stdio.h>

// int sumary(int ary[], int SIZE); 함수원형을 선언하세요

int main(void)
{
	// int형 배열 point를 { 95, 88, 76, 54, 85, 33, 65, 78, 99, 82 }로 초기화하세요

	// sizeof(point)를 이용하여 배열 전체 크기를 int형 변수 arySize에 저장하세요
	// printf("메인에서 배열 전체크기: %d\n", arySize); 형식으로 출력하세요
	// arySize / sizeof(int)로 배열 길이를 int형 변수 aryLength에 저장하세요

	// int형 변수 sum을 0으로 초기화하세요
	// 0부터 aryLength 미만까지 반복하는 for문으로 point[i]를 sum에 누적하세요

	// printf("메인에서 구한 합은 %d\n", sum); 형식으로 출력하세요
	// printf("함수 sumary() 호출로 구한 합은 %d\n", sumary(point, aryLength)); 형식으로 출력하세요
	// printf("함수 sumary() 호출로 구한 합은 %d\n", sumary(&point[0], aryLength)); 형식으로 출력하세요

	return 0;
}

// int sumary(int ary[], int SIZE) 함수를 정의하세요
// 함수 내부에서 printf("함수에서 배열 전체크기: %d\n", (int)sizeof(ary)); 로 배열 크기를 출력하세요
// 0부터 SIZE 미만까지 반복하며 ary[i]를 sum에 누적하고 return 하세요
