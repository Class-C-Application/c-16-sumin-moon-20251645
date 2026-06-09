#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	// typedef를 이용하여 영화 정보 구조체를 정의하고 movie로 재정의하세요
	// 멤버: char *title (영화제목), int attendance (관객수), char director[20] (감독)


	// movie형 배열 box를 선언하고 다음 값으로 초기화하세요:
	// {"명량", 17613000, "김한민"}, {"극한직업", 16261000, "윤제균"}, {"신과함께-죄와벌", 14419000}
	// (세 번째 감독은 비워두고 아래에서 strcpy로 저장)


	// strcpy를 이용하여 box[2].director에 "김용화"를 저장하세요


	printf("       제목        감독   관객수\n");
	printf("=================================\n");
	// for문으로 3편의 정보를 출력하세요
	// 형식: "[%15s] %6s %d\n", title, director, attendance


	return 0;
}
