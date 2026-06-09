#include <stdio.h>

int main(void)
{
	char c[] = "C C++ Java";
	printf("%s\n", c);
	c[5] = [    ]; // 가이드: 널 문자('\0')를 삽입해 문자열을 분리
	printf("%s\n%s\n", c, (c + 6));

	c[5] = [  ]; // 가이드: 빈 공백(' ')으로 원상 복원
	char* p = [  ]; // 가이드: 문자 배열 c의 시작 주소를 대입
	while ([  ]) // 가이드: 포인터가 가리키는 문자가 널이 아닌 동안
		printf("%c", [    ]); // 가이드: 현재 문자 출력 후 포인터를 다음으로 이동
	printf("\n");

	return 0;
}
