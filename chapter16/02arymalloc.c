#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n = 0;
    int i = 0;
    int sum = 0;
    int *ary = NULL;
    printf("입력할 점수의 개수를 입력 >> ");
    scanf("%d", &n);

    ary = (int *)malloc(sizeof(int) * n);

    if(ary == NULL) {
        printf("메모리 할당에 문제가 있습니다.");
        return 1;
    }

    printf("%d개의 점수 입력 >> ", n);
    for (int i = 0; i < n; i++)
    {
        // 가이드: ary+i 주소에 점수를 입력하고, i번째 값을 sum에 더하세요.
        scanf("%d", &ary[i]);
        sum += ary[i];
    }

    printf("합: %d  평균: %.1f\n", sum, (double)sum / n);

    free(ary);
    ary = NULL;

    return 0;
}
