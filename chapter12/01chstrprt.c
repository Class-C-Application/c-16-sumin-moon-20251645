#include <stdio.h>

int main(void)
{
	//문자 선언과 출력
	char ch = [  ]; // 가이드: 문자 'A'를 대입
	printf("%c %d\n", ch, ch);

	//문자열 선언 방법1: 문자 배열에 개별 문자 + 널문자
	char java[] = { [  ], [  ], [  ], [  ], [  ] }; // 가이드: 'J','A','V','A','\0'
	printf("%s\n", java);
	//문자열 선언 방법2: 문자열 리터럴 (배열크기 생략)
	char py[] = [        ]; // 가이드: "Python" 문자열 리터럴 대입
	printf("%s\n", py);
	//문자열 선언 방법3: 배열 크기 지정
	char csharp[[]] = "C#"; // 가이드: 배열 크기를 지정 (문자 수 + 1)
	printf("%s\n", csharp);

	//문자 배열에서 문자 출력
	printf("%c %c\n", csharp[0], csharp[1]);

	return 0;
}
