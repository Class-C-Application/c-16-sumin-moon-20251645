#include <stdio.h>

int main(void)
{


	udata value, [  ];	// 가이드: 포인터 변수 p 선언

	[  ] = [      ];	// 가이드: p = &value
	[       ] = 'a';	// 가이드: p->ch
	printf("%c %c\n", [      ], [         ]);	// 가이드: p->ch, (*p).ch
	[       ] = 100;	// 가이드: p->cnt
	printf("%d ", [      ]);	// 가이드: p->cnt
	[        ] = 3.14;	// 가이드: p->real
	printf("%.2f \n", [      ]);	// 가이드: p->real

	return 0;
}
