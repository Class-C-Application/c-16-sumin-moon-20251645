#include <stdio.h>
#include <string.h>

void reverse(char []);

int main(void)
{
	char s[50];
	char* str = "Python C";
	// memcpy로 str의 내용을 s에 복사하세요 (strlen(str)+1 바이트)

	printf("%s\n", s);

	// reverse 함수를 호출해 s를 역순으로 변환하세요

	printf("%s\n", s);

	return 0;
}

void reverse(char str[])
{
	// i는 왼쪽(0)에서, j는 오른쪽(strlen-1)에서 시작해 서로 교차할 때까지 반복하세요
	// 반복마다 str[i]와 str[j]를 임시 변수를 이용해 교환하고 i++, j-- 하세요
}
