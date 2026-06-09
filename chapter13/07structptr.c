#include <stdio.h>


[      ] = { "강좌명", "강좌구분", "학점", "시수" };
[      ] = { "교양", "일반선택", "전공필수", "전공선택" };

int main(void)
{
	
	[         ] p = [    ];	// 가이드: lecture형 포인터 p 선언 후 &os로 초기화

	printf("구조체 크기: %zu, 포인터 크기: %zu\n\n", );
	printf("%10s %12s %6s %6s\n", );
	printf("%12s %10s %5d %5d\n", [       ], lectype[[       ]], [        ], [        ]);
	// 가이드: p->name, p->type, p->credit, p->hours

	p = [    ];	// 가이드: &c
	printf("%12s %10s %5d %5d\n", [        ].name, lectype[[        ].type], [        ].credit, [        ].hours);
	// 가이드: (*p) 역참조 방식 사용

	return 0;
}
