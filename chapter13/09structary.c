#include <stdio.h>


[        ] = { "교양", "일반선택", "전공필수", "전공선택" };
[        ] = { "강좌명", "강좌구분", "학점", "시수" };

int main(void)
{
	//구조체 lecture의 배열 선언 및 초기화
	[       ] = { { "인간과 사회", 0, 2, 2 },
						 { "경제학개론", 1, 3, 3 },
						 { "자료구조", 2, 3, 3 },
						 { "모바일프로그래밍", 2, 3, 4 },
						 { "고급 C프로그래밍", 3, 3, 4 } };

	int arysize = [                              ];	// 가이드: sizeof로 배열 크기 계산

	printf("배열크기: %d\n\n", arysize);
	printf("%12s   %12s %6s %6s\n", head[0], head[1], head[2], head[3]);
	printf("==============================================\n");

	for (int i = 0; i < arysize; i++)
		printf("%16s %10s %5d %5d\n", [              ].name,
			lectype[[              ].type], [              ].credit, [              ].hours);
		// 가이드: course[i] 형태로 배열 원소 접근

	return 0;
}
