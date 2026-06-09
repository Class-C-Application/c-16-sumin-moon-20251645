#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct personscore
{
    int number;
    char name[40];
    int mid;
    int final;
    int quiz;
};

typedef struct personscore pscore;

void printhead(void);
int printscore(FILE* f);
void appendscore(FILE* f, int cnt);

int main(void)
{
    FILE* f;
    char fname[] = "score.bin";
    int cnt = 0;
    long offset = 0;

    // 가이드: score.bin을 추가와 읽기가 가능한 이진 모드로 여세요.
    f = fopen(fname, [     ]);
    if (f == NULL)
    {
        printf("파일이 열리지 않습니다.\n");
        exit(1);
    }

    int readcnt = printscore(f);

    if (readcnt == 1)
    {
        pscore score;

        offset = (long)sizeof(pscore);

        // 가이드: 파일 끝에서 구조체 하나 크기만큼 앞으로 이동해 마지막 번호를 읽으세요.
        fseek(f, [        ], [        ]);
        fread([       ], sizeof(pscore), 1, f);

        cnt = score.number;

        printf("\n제일 마지막 번호가 %d번 입니다.\n\n", cnt);
    }

    // 가이드: 파일 위치를 끝으로 옮긴 뒤 새 성적을 추가하세요.
    fseek(f, 0L, [        ]);

    appendscore(f, cnt);

    printscore(f);

    fclose(f);

    return 0;
}

void appendscore(FILE* f, int cnt)
{
    char line[80];
    pscore score = { 0 };

    printf("추가할 이름과 성적(중간, 기말, 퀴즈)을 입력하세요.\n\n");

    // 가이드: 한 줄 입력을 구조체로 변환한 뒤 fwrite()로 추가하세요.
    while (fgets(line, sizeof(line), stdin) != NULL)
    {
        sscanf(line, "%s %d %d %d",
               score.name, [          ], [          ], [          ]);

        score.number = [       ];

        fwrite([       ], sizeof(pscore), [ ], f);
    }
}

int printscore(FILE* f)
{
    // 가이드: 파일 위치를 처음으로 되돌리세요.
    [       ](f);

    pscore score;

    // 가이드: 첫 구조체를 읽지 못하면 성적 정보가 없다고 출력하세요.
    if (fread([       ], sizeof(pscore), 1, f) != 1)
    {
        printf("현재는 성적 정보가 하나도 없습니다. >>\n");
        return 0;
    }

    printhead();

    do
    {
        fprintf(stdout, "%6d%18s%8d%8d%8d\n",
                score.number, score.name, score.mid, score.final, score.quiz);
    } while (fread([       ], sizeof(pscore), 1, f) == 1);

    fprintf(stdout, "%s\n", "  -----------------------------------------------");

    return 1;
}

void printhead(void)
{
    printf("\n현재의 성적 내용은 >>\n");
    fprintf(stdout, "%s\n", "  _________________________________________________");
    fprintf(stdout, "%8s%15s%10s%8s%8s\n", "번호", "이름", "중간", "기말", "퀴즈");
    fprintf(stdout, "%s\n", "  -------------------------------------------------");
}
