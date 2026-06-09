#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdint.h> // uintptr_t 사용을 위해 필요

int main(void)
{
    // 1. 정수형 변수 선언
    [        ] input; // 가이드: 정수(int)를 저장할 변수를 선언하세요.

    printf("정수 입력: ");
    // 2. scanf를 이용한 입력 (주소 전달)
    scanf("%d", [        ]); // 가이드: 변수 input의 '주소'를 전달하세요.

    printf("입력 값: %d\n", input);

    // 3. 주소값 출력 (16진수 표기)
    // 가이드: 변수 input의 주소를 %p 형식으로 출력하세요.
    printf("주소 값: %p(16진수)\n", [        ]);

    // 4. 주소값 출력 (10진수 표기)
    // 가이드: 주소를 정수형(uintptr_t)으로 변환하여 %llu로 출력하세요.
    printf("주소 값: %llu(10진수)\n", (uintptr_t)[        ]);

    // 5. 주소값 자체의 크기 확인
    // 가이드: 변수 input의 주소(&input)가 차지하는 메모리 크기를 출력하세요.
    printf("주소 값 크기: %zu\n", sizeof([        ]));

    return 0;
}