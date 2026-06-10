#include <stdio.h>
#include <stdlib.h>

void myprintf(int* ary, int n);

int main(void)
{
    int* ary = NULL;

    // 가이드: int형 원소 3개를 0으로 초기화하여 동적 할당하세요.
    if ((ary = (int*)calloc(3, sizeof(int) )) == NULL)
    {
        printf("메모리 할당이 문제가 있습니다.\n");
        exit(EXIT_FAILURE);
    }

    myprintf(ary, 3);

    // 가이드: 동적 메모리를 해제하세요.
    free(ary);
    myprintf(ary, 3);
    return 0;
}

void myprintf(int* ary, int n)
{
    for (int i = 0; i < n; i++)
        printf("ary[%d] = %d\n", i, *(ary+i));
}
