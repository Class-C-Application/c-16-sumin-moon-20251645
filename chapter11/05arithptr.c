#include <stdio.h>

int main(void)
{
    // 1. [선언부] 각 포인터 타입에 임의의 주소값(100)을 강제로 할당하세요.
    // 가이드: 숫자 100을 각 포인터 타입으로 형변환(Casting)하여 대입합니다.
    [        ] pc = (char*) 100;
    [        ] pi = (int*) 100;
    [        ] pd = (double*) 100;

    // 2. [출력부] char 포인터의 주소 이동 확인 (보폭: 1바이트)
    // 가이드: (pc - 1), pc, (pc + 1)을 순서대로 출력하여 주소 변화를 확인하세요.
    printf("%lld  %lld  %lld\n", (long long)([        ]), (long long)pc, (long long)([        ]));

    // 3. [출력부] int 포인터의 주소 이동 확인 (보폭: 4바이트)
    // 가이드: (pi - 1), pi, (pi + 1)을 출력하세요. 주소가 4씩 변하는지 확인합니다.
    printf("%llu  %llu  %llu\n", (unsigned long long)([        ]),
                                 (unsigned long long)pi, 
                                 (unsigned long long)([        ]));

    // 4. [출력부] double 포인터의 주소 이동 확인 (보폭: 8바이트)
    // 가이드: (pd - 1), pd, (pd + 1)을 출력하세요. 주소가 8씩 변하는지 확인합니다.
    printf("%llu  %llu  %llu\n", (unsigned long long)([        ]),
                                 (unsigned long long)pd, 
                                 (unsigned long long)([        ]));

    return 0;
}