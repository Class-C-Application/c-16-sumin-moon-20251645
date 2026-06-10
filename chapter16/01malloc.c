#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int* pi = NULL;

    // 가이드: int형 자료 하나를 저장할 동적 메모리를 할당하세요.
    pi = (int*) malloc( sizeof(int) );
    if (pi == NULL)
    {
        printf("메모리 할당에 문제가 있습니다.");
        exit(1);
    };

    // 가이드: 동적 메모리에 값 7을 저장하고 출력하세요.
    *pi = 7;
    printf("주소 값: *pi = %p, 저장 값: p = %d\n", pi, *pi);

    // 가이드: 동적 메모리를 해제하세요.
    free(pi);

    return 0;
}
