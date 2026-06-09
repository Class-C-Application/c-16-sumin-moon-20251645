#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char fname[] = "char.txt";
    FILE* f;
    int ch;

    // 가이드: char.txt를 쓰기 모드로 여세요.
    f = fopen(fname, [   ]);
    if (f == NULL)
    {
        printf("파일이 열리지 않습니다.\n");
        exit(1);
    }

    puts("영어 문자를 계속 입력하다가 종료하려면 x를 입력 >>");

    // 가이드: x가 입력되기 전까지 문자를 하나씩 파일에 쓰세요.
    while ((ch = [       ]()) != [   ])
    {
        [       ](ch, f);
    }

    fclose(f);
    puts("");

    // 가이드: char.txt를 읽기 모드로 다시 여세요.
    f = fopen(fname, [   ]);
    if (f == NULL)
    {
        printf("파일이 열리지 않습니다.\n");
        exit(1);
    }

    // 가이드: EOF가 나올 때까지 파일에서 문자를 읽어 화면에 출력하세요.
    while ((ch = [       ](f)) != [   ])
    {
        [       ](ch);
    }

    fclose(f);
    puts("");

    return 0;
}
