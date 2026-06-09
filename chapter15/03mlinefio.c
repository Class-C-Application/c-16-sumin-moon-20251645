#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char fname[] = "grade.txt";
    char names[80];
    int cnt = 0;
    FILE* f;

    // 가이드: 여러 줄의 성적 정보를 저장할 파일을 쓰기 모드로 여세요.
    f = fopen(fname, [   ]);
    if (f == NULL)
    {
        printf("파일이 열리지 않습니다.\n");
        exit(1);
    }

    printf("이름과 성적(중간, 기말)을 입력하세요.\n");

    // 가이드: 표준입력에서 한 줄씩 읽어 파일에 번호와 함께 저장하세요.
    while ([       ](names, sizeof(names), stdin) != NULL)
    {
        fprintf(f, "%d ", [       ]);
        [       ](names, f);
    }

    fclose(f);

    return 0;
}
