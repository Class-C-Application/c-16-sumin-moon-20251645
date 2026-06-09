#include <stdio.h>
#include <string.h>

int main(void)
{
	char src[20] = "C Python";
	char dst[20];

	printf("%s\n", src);
	printf("%zu\n", [          ](src)); // 가이드: src의 문자열 길이를 구하는 함수
	[          ](dst, src, strlen(src) + 1); // 가이드: src를 dst에 바이트 단위로 복사
	printf("%s\n", dst);
	memcpy(dst, "안녕하세요!", strlen("안녕하세요!") + 1);
	printf("%s\n\n", dst);

	char* s1 = "C lang";
	char* s2 = "C lang";
	printf("strcmp(%s, %s) = %d\n", s1, s2, [          ](s1, s2)); // 가이드: 문자열 전체 비교
	s1 = "C lang";
	s2 = "C ";
	printf("strcmp(%s, %s) = %d\n", s1, s2, strcmp(s1, s2));
	printf("strcmp(%s, %s) = %d\n", s2, s1, strcmp(s2, s1));
	printf("strncmp(%s, %s, %d) = %d\n", s1, s2, 2, [           ](s1, s2, 2)); // 가이드: 앞 2바이트만 비교

	return 0;
}
