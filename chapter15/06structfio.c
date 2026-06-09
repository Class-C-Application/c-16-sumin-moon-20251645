#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// 가이드: 학생 번호, 이름, 중간, 기말, 퀴즈 성적을 저장하는 구조체를 완성하세요.
typedef struct personscore
{
    int number;
    char name[40];
    int mid;
    int final;
    int quiz;
} pscore;

void printhead(void)
{
    printf("%s\n", "  _________________________________________________");
    printf("%8s%15s%10s%8s%8s\n", "번호", "이름", "중간", "기말", "퀴즈");
    printf("%s\n", "  -------------------------------------------------");
}

int main(void)
{
    char fname[] = "score.bin";
    FILE* f;

    // 가이드: 구조체를 저장할 이진 파일을 쓰기 모드로 여세요.
    f = fopen(fname, [    ]);
    if (f == NULL)
    {
        printf("파일이 열리지 않습니다.\n");
        exit(1);
    }

    char line[80];
    int cnt = 0;
    pscore score;

    printf("이름과 성적(중간, 기말, 퀴즈)을 입력하세요.\n");

    // 가이드: 한 줄 입력을 구조체로 변환한 뒤 이진 파일에 저장하세요.
    while (fgets(line, sizeof(line), stdin) != NULL)
    {
        sscanf(line, "%s %d %d %d",
               score.name, [          ], [          ], [          ]);

        score.number = [       ];
        fwrite([       ], sizeof(pscore), [ ], f);
    }

    fclose(f);

    // 가이드: score.bin을 이진 읽기 모드로 다시 열고, 구조체를 읽어 출력하세요.
    f = fopen(fname, [    ]);
    if (f == NULL)
    {
        printf("파일이 열리지 않습니다.\n");
        exit(1);
    }

    printhead();

    while (fread([       ], sizeof(pscore), 1, f) == 1)
    {
        fprintf(stdout, "%6d%18s%8d%8d%8d\n",
                score.number, score.name, score.mid, score.final, score.quiz);
    }

    printf("%s\n", "  -------------------------------------------------");

    fclose(f);

    return 0;
}
