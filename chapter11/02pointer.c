#include <stdio.h>

int main(void)
{
    // 1. 일반 변수 선언 및 데이터 초기화
    int data = 100;

    // 2. [선언부] 포인터 변수를 선언하고 변수 data의 주소를 연결하세요.
    [          ] ptrint; // 가이드: 정수형 포인터 ptrint를 선언하세요.
    ptrint = [        ]; // 가이드: ptrint에 data의 주소를 대입하세요.

    printf("변수명  주소값            저장값\n");
    printf("------------------------------------------\n");

    // 3. [출력부] 일반 변수 data의 정보 출력
    // 가이드: data의 주소(&data)와 실제 저장된 값(data)을 출력하세요.
    printf("  data  %p  %d\n", [        ], [        ]);

    // 4. [출력부] 포인터 변수 ptrint의 정보 출력
    // 가이드: 포인터 ptrint '자체'의 주소와 ptrint가 '저장하고 있는 값'을 출력하세요.
    printf("ptrint  %p  %p\n", [        ], [        ]);

    // 5. 포인터 변수의 크기 확인
    // 가이드: 주소를 담는 변수(ptrint)가 차지하는 바이트 크기를 출력하세요.
    printf("%zu\n", sizeof([        ]));

    return 0;
}