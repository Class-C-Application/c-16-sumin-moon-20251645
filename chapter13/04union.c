#include <stdio.h>

//유니온 구조체를 정의하면서 변수 data1도 선언한 문장
union data
{
	char ch;	//문자형
	int cnt;	//정수형
	double real;	//실수형
} data1;

int main(void)
{
	union data data2 = { [   ] };	// 가이드: 첫 멤버(char)로만 초기화 — 'A'
	union data data4 = data2;
	data4.real = 3.78;

	printf("%zu %zu\n", sizeof(union data), sizeof(data2));
	printf("%c %f\n", [        ], [         ]);	// 가이드: data2.ch, data4.real

	//멤버 ch에 저장
	[        ] = 'a';	// 가이드: data1.ch
	printf("%c %d %f\n", data1.ch, data1.cnt, data1.real);
	//멤버 cnt에 저장
	[         ] = 100;	// 가이드: data1.cnt
	printf("%c %d %f\n", data1.ch, data1.cnt, data1.real);
	//멤버 real에 저장
	[          ] = 3.156759;	// 가이드: data1.real
	printf("%c %d %f\n", data1.ch, data1.cnt, data1.real);

	return 0;
}
