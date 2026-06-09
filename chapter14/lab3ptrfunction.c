#include <stdio.h>

int add(int a, int b);
int mult(int a, int b);
int subt(int a, int b);

int main(void)
{
	// 가이드: int 2개를 매개변수로 받고 int를 반환하는 함수 포인터 배열 선언
	int (*pfunary[3])(        );
	pfunary[0] = ; // 가이드: add 함수 저장
	pfunary[1] = ; // 가이드: mult 함수 저장
	pfunary[2] = ; // 가이드: subt 함수 저장

	int m = 8, n = 6;
	char* ops = "*+-";
	char op;
	while (        ) // 가이드: ops가 가리키는 문자를 op에 저장한 뒤 ops를 다음 문자로 이동
		switch (op)
		{
			case '+': printf("%c 결과: %d\n", op, pfunary[   ](m, n)); // 가이드: add가 저장된 인덱스
				break;
			case '-': printf("%c 결과: %d\n", op, pfunary[   ](m, n)); // 가이드: subt가 저장된 인덱스
				break;
			case '*': printf("%c 결과: %d\n", op, pfunary[   ](m, n)); // 가이드: mult가 저장된 인덱스
				break;
		}

	return 0;
}

int add(int a, int b)
{
	return ; // 가이드: a와 b의 합
}
int mult(int a, int b)
{
	return ; // 가이드: a와 b의 곱
}
int subt(int a, int b)
{
	return ; // 가이드: a와 b의 차
}
