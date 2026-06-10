#include <stdio.h>
#include <stdlib.h>
void myprintf(int* ary, int n);

int main(void)
{
    int* reary, * cary;

    // 가이드: int형 원소 3개를 0으로 초기화하여 할당하세요.
    if ((cary = (int*)calloc(3, sizeof(int))) == NULL)
    {
        printf("메모리 할당이 문제가 있습니다.\n");
        exit(EXIT_FAILURE);
    }

    printf("%p\n", cary);
    cary[0] = 10;

    // 가이드: 기존 공간을 int형 원소 4개 크기로 재할당하세요.
    if ((reary = (int*)realloc( cary, 4 * sizeof(int) )) == NULL)
    {
        printf("메모리 할당이 문제가 있습니다.\n");
        exit(EXIT_FAILURE);
    }

    printf("%p\n", reary);
    myprintf(reary, 4);
    free(reary);

    return 0;
}

void myprintf(int* ary, int n)
{
    for (int i = 0; i < n; i++)
        printf("ary[%d] = %d ", i, *(ary + i));
    printf("\n");
}
