#include <stdio.h>
#include <stdint.h>

int main(void)
{
    // 1. 4바이트 정수형 변수 선언 (16진수 0x44, 43, 42, 41은 ASCII로 'D', 'C', 'B', 'A')
    [        ] value = 0x44434241;
    printf("저장 값: %#x(16진수) %d(10진수)\n\n", value, value);

    // 2. [선언부] 정수형 주소를 서로 다른 크기의 포인터에 담으세요.
    [        ] pi = &value;            // 가이드: int형 포인터 pi 선언
    [        ] pc = (char*) &value;    // 가이드: char형 포인터 pc 선언 (1바이트씩 보기 위해 형변환)

    printf("변수명   저장값      주소값\n");
    printf("---------------------------------\n");
    // 가이드: value의 값과 pi가 가진 주소를 uintptr_t로 캐스팅하여 출력하세요.
    printf(" value   %#x  %llu\n\n", value, (uintptr_t)[     ]);

    printf("간접참조 코드 문자   주소값\n");
    printf("------------------------------\n");
    // 3. [루프부] 1바이트씩 이동하며 메모리 내부를 들여다보세요.
    for (int i = 0; i <= 3; i++)
    {
        // 가이드: pc에서 i만큼 떨어진 주소의 값을 읽어오세요 (간접 참조)
        char ch = [           ]; 
        printf(" *(pc+%d) %#x %3c %llu\n", i, ch, ch, (uintptr_t)(pc + i));
    }

    // 4. [심화] 메모리 저장 순서(Little Endian) 확인 실습
    {
        short value = 0x4847; // ASCII 'H'(0x48), 'G'(0x47)
        char* p = (char*)&value;
        // 가이드: p와 p+1 위치의 문자를 각각 출력하여 어떤 글자가 먼저 나오는지 확인하세요.
        printf("%c %c\n", [     ], [       ]); 
    }
    {
        int value = 0x00110012;
        short* p = (short*)&value;
        // 가이드: 4바이트 int를 2바이트 short씩 끊어서 출력해 보세요.
        printf("%hd %hd\n", [       ], [     ]);
    }

    return 0;
}