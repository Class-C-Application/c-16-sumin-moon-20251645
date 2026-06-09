#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	char dest[80] = "Java";
	char source[80] = "C is a language.";

	printf("%s\n", [       ](dest, source)); // 가이드: source를 dest에 통째로 복사
	printf("%s\n", [        ](dest, "C#", 2)); // 가이드: "C#"을 최대 2바이트만 복사

	printf("%s\n\n", strncpy(dest, "C#", 3));

	char data[80] = "C";

	printf("%s\n", [       ](data, " is ")); // 가이드: " is "를 data 뒤에 이어붙임
	printf("%s\n", [        ](data, "a java", 2)); // 가이드: "a java"에서 앞 2바이트만 이어붙임
	printf("%s\n", strcat(data, "procedural "));
	printf("%s\n", strcat(data, "language."));

	/* 버퍼 오버플로우 예시 - 실행 시 오류발생
	{
		char dest[5] = "C";
		char* destc = "C";
		strcpy(dest, "Java language");
		strcpy(destc, " Java language");
		strcat(dest, " is a language.");
		strcat(destc, " is a language.");
	}
	*/

	return 0;
}
