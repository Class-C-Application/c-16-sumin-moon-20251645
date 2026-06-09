#include <stdio.h>

struct date
{
	int year;	//년
	int month;	//월
	int day;	//일
};

//struct date 유형을 간단히 date 형으로 사용하기 위한 구문
[                        ];	// 가이드: typedef로 struct date를 date로 재정의

int main(void)
{
	//구조체를 정의하면서 바로 자료형 software로 정의하기 위한 구문
	typedef struct
	{
		char title[30];	 //제목
		char company[30];//제작회사
		char kinds[30];	 //종류
		[    ] release;	 // 가이드: date형 멤버
	} software;

	software vs = { "비주얼스튜디오 커뮤니티", "MS", "통합개발환경", { [    ], [    ], [    ] } };
	// 가이드: release 초기화 — 2022, 8, 29

	printf("제품명: %s\n", vs.title);
	printf("회사 : %s\n", vs.company);
	printf("종류 : %s\n", vs.kinds);
	printf("출시일: %d. %d. %d\n", [              ], [               ], [             ]);
	// 가이드: vs.release.year, vs.release.month, vs.release.day

	return 0;
}
