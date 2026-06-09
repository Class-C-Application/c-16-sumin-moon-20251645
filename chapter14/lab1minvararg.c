#include <stdio.h> 
#include <stdarg.h> 

int min(        ) // 가이드: 정수 개수 n과 가변인자를 매개변수로 선언
{
    int min, dum;

    // 가이드: 가변인자 목록을 처리할 변수 선언
    
    // 가이드: n 다음 인자부터 가변인자 처리를 시작
    

    min = ; // 가이드: 첫 번째 가변인자를 초기 최솟값으로 저장
    for (int i = 1; i < n; i++) //n-1번 반복 
        if (        ) // 가이드: 다음 가변인자를 dum에 저장하고 현재 최소와 비교
            ; // 가이드: 더 작은 값이면 최솟값 수정
    // 가이드: 가변인자 처리 종료
    

    return min;
}

int main()
{
    int count = 5;
    printf("최소 값: %d\n", min(count, 20, 30, 33, 99, 6));
    return 0;
}
