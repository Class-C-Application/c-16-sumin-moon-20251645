#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE* f;

    // 가이드: 현재 소스 파일을 읽기 모드로 여세요.
    f = fopen("chapter15/05flist.c", [   ]);
    if (f == NULL)
    {
        printf("파일이 열리지 않습니다.\n");
        exit(1);
    }

    int ch, cnt = 0;

    printf("%4d: ", [       ]);

    // 가이드: 파일 내용을 한 글자씩 출력하고, 줄이 바뀌면 줄 번호를 출력하세요.
    while ((ch = [       ](f)) != [   ])
    {
        putchar(ch);

        if (ch == [    ])
            printf("%4d: ", [       ]);
    }

    printf("\n");

    fclose(f);

    return 0;
}
