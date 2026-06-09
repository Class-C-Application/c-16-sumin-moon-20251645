#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n = 0;
    printf("입력할 점수의 개수를 입력 >> ");
    scanf("%d", &n);

    int* ary = NULL;

    // 가이드: int형 점수 n개를 저장할 동적 배열을 할당하세요.
    if ((ary = (int*)[      ]( [           ] * n)) == NULL)
    {
        printf("메모리 할당에 문제가 있습니다.");
        exit(1);
    };

    printf("%d개의 점수 입력 >> ", n);
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        // 가이드: ary+i 주소에 점수를 입력하고, i번째 값을 sum에 더하세요.
        scanf("%d", [        ]);
        sum += [          ];
    }

    printf("입력 점수: ");
    for (int i = 0; i < n; i++)
        printf("%d ", [          ]);
    printf("\n");
    printf("합: %d  평균: %.1f\n", sum, (double)sum / n);

    [    ](ary);

    return 0;
}
