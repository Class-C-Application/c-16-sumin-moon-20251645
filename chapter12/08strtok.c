#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[] = "C and C++\t languages are best!";
	char *delimiter = " !\t";

	printf("문자열 \"%s\"을 >>\n", str);
	printf("구분자[%s]를 이용하여 토큰을 추출 >>\n", delimiter);
	char* ptoken = [       ](str, delimiter); // 가이드: 첫 번째 토큰을 반환하는 함수
	while (ptoken)
	{
		printf("%s\n", ptoken);
		ptoken = strtok([    ], delimiter); // 가이드: 다음 토큰을 얻으려면 첫 인자에 무엇을 전달?
	}

	return 0;
}
